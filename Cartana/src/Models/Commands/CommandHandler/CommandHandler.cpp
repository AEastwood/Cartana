#include <iostream>
#include <string>
#include "../Command/Command.h"
#include "../CommandHandler/CommandHandler.h"
#include "../../Log/Log.h"
#include "../ValidCommands/ValidCommands.h"
#include "../../Exceptions/CommandException/CommandException.h"

#pragma once

using std::cin;
using std::vector;

// Tell CLI to await new commands
int CommandHandler::Await() {
	return 0;
}

Command CommandHandler::FormatCommand(Command command) {
	return command;
}

// Get command from CLI
Command CommandHandler::GetCommand() {
	Command command;
	GetInput(&command.raw);

	commands.push_back(command);

	return command;
}

// Return the previous command
Command CommandHandler::GetPreviousCommand(int depth) {
	return commands[this->commands.size() - depth];
}

// Return a list of previous commands
vector<Command> CommandHandler::GetPreviousCommands() {
	return this->commands;
}

// Handle the incoming command
void CommandHandler::Handle(Command* command) {
	try {
		ValidCommands::Commands[command->GetRaw()]();
	}
	catch (CommandException commandException) {
		Error("Unable to execute command " + command->GetRaw() + " - " + commandException.GetMessage());
	}
}

// Register all available commands
void CommandHandler::Register() {
	ValidCommands::Register();
}