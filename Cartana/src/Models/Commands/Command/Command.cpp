#include <iostream>
#include <vector>
#include "../Command/Command.h"
#include "../CommandResult/CommandResult.h"
#include "../ValidCommands/ValidCommands.h"

#pragma once

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

map<string, string> arguments;

// Constructor
Command::Command() {
	this->uuid = rand();
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

// Set when the command will time out and exit
void Command::SetTimeout(int timeout) {
	this->timeout = timeout;
}

// Convert command to string
string Command::ToString() {
	return this->raw;
}
