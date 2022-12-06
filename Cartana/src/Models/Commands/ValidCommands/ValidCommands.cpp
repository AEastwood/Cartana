#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "ValidCommands.h"
#include "../../Log/Log.h"
#include "../CommandActions/CommandActions.h"

#pragma once

using std::map;
using std::string;

// Define function pointer
typedef int (*FnPtr)(map<string, string>);

// List of valid commands
map<string, FnPtr> ValidCommands::Commands;

// List of valid exit commands
vector<string> ValidCommands::ExitCommands = {
	"exit", "exit.force", "system.interrupt"
};

// Determines if the command exists
bool ValidCommands::Exists(Command* command) {
	return Commands.find(command->GetName()) != Commands.end();
}

// Determines if the command should exit
bool ValidCommands::Exits(Command* command) {
	return std::find(ExitCommands.begin(), ExitCommands.end(), command->GetName()) != ExitCommands.end();
}

// Register valid commands
void ValidCommands::Register() {
	Commands["commands.previous"] = CommandActions::TestAction;
}