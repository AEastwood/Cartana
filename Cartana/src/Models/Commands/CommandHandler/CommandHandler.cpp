#include <iostream>
#include <string>
#include <sstream>
#include "../Command/Command.h"
#include "../CommandHandler/CommandHandler.h"
#include "../../Log/Log.h"
#include "../ValidCommands/ValidCommands.h"
#include <iostream>
#include <string>
#include <sstream>
#include "../Command/Command.h"
#include "../CommandHandler/CommandHandler.h"
#include "../../Log/Log.h"
#include "../ValidCommands/ValidCommands.h"
#include "../../Exceptions/CommandException/CommandException.h"

#pragma once

using std::cin;
using std::string;
using std::stringstream;
using std::vector;

// Format command, extract arguments and set them appropriately
Command CommandHandler::FormatCommand(Command command) {
	stringstream ss(command.GetRaw());
	int index = 0;

	while (ss.good()) {
		string arg;
		getline(ss, arg, ' ');

		(index == 0) 
			? command.SetName(arg) 
			: command.AddArgument(arg);

		index++;
	}

	return command;
}

// Get command from CLI
Command CommandHandler::GetCommand() {
	Command command;
	GetInput(&command.raw);
	
	command = this->FormatCommand(command);
	commands.push_back(command);

	return command;
}

// Get user input and set it to the proposed property
void CommandHandler::GetInput(string* property) {
	cout << "Enter command: ";
	getline(cin, *property);
}

// Return the previous command
Command CommandHandler::GetPreviousCommand(int depth) {
	return this->commands[this->commands.size() - depth];
}

// Return a list of previous commands
vector<Command> CommandHandler::GetPreviousCommands() {
	return this->commands;
}

// Handle the incoming command
void CommandHandler::Handle(Command* command) {
	try {
		ValidCommands::Commands[command->GetName()](command->GetArguments());
	}
	catch (CommandException commandException) {
		Error("Unable to execute command " + command->GetName() + " - " + commandException.GetMessage());
	}
}

// Register all available commands
void CommandHandler::Register() {
	ValidCommands::Register();
}