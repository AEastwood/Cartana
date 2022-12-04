#include <iostream>
#include <vector>
#include "../Command/Command.h"
#include "../CommandResult/CommandResult.h"
#include "../ValidCommands/ValidCommands.h"
#include "../../../../lib/uuid_v4-1.0.0/uuid_v4.h"
#include "../../../../lib/uuid_v4-1.0.0/endianness.h"

#pragma once

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

map<string, string> arguments;

Command::Command() {
	this->SetUUID();
}

// Add argument to command
void Command::AddArgument(string argument) {
	this->arguments.push_back(argument);
}

// Determines if command exits
bool Command::Exits() {
	return ValidCommands::Exits(this);
}

// Determine if the command exists
bool Command::Exists() {
	return ValidCommands::Exits(this);
}

// get Command Name
string Command::GetName() {
	return this->name;
}

// Get Command as raw input
string Command::GetRaw() {
	return this->raw;
}

// Get Command UUID
string Command::GetUUID() {
	return this->uuid;
}

// Set arguments of the command
void Command::SetArguments(vector<string> arguments) {
	this->arguments = arguments;
}

// Set name of command
void Command::SetName(string name) {
	this->name = name;
}

// Set when the command will time out and exit
void Command::SetTimeout(int timeout) {
	this->timeout = timeout;
}

// Set UUID
void Command::SetUUID() {
	UUIDv4::UUIDGenerator<std::mt19937_64> uuidGenerator;
	UUIDv4::UUID uuid = uuidGenerator.getUUID();
	
	this->uuid = uuid.str();
}

// Convert command to string
string Command::ToString() {
	return this->raw;
}
