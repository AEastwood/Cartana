#include <iostream>
#include "./result/result.h"
#include "../command/command.h"

#pragma once

using std::cout;
using std::endl;
using std::string;

Command::Command() {
	this->uuid = rand();
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
