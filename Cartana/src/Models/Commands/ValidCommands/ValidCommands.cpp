#include <iostream>
#include "ValidCommands.h"
#include "../../Log/Log.h"

#pragma once

using std::map;
using std::string;

// List of valid commands
map<string, void(*)()> ValidCommands::Commands;

// List of valid exit commands
vector<string> ValidCommands::ExitCommands = {
	"exit", "exit.force", "system.interrupt"
};

// Determines if the command exists
bool ValidCommands::Exists(Command* command) {
	return Commands.find(command->GetRaw()) != Commands.end();
}

// Determines if the command should exit
bool ValidCommands::Exits(Command* command) {
	return std::find(ExitCommands.begin(), ExitCommands.end(), command->GetRaw()) != ExitCommands.end();
}

// Register valid commands
void ValidCommands::Register() {
	Commands["commands.previous"] = Test;
}