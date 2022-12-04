#include <iostream>
#include "../Command/Command.h"
#include "../CommandResult/CommandResult.h"

#pragma once

using std::cout;
using std::endl;
using std::string;

Command::Command() {
	this->uuid = rand();
}

// Determines if command exits
bool Command::Exits() {
	return this->GetRaw() == "exit";
}

// get Command Name
string Command::GetName() {
	return this->name;
}

// Get Command as raw input
string Command::GetRaw() {
	return this->raw;
}

// Convert command to string
string Command::ToString() {
	return this->raw;
}
