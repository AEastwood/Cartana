#include <iostream>
#include <string>
#include <vector>
#include "../command.h"
#include "commandhandler.h"

#pragma once

using std::cout;
using std::endl;
using std::vector;


int CommandHandler::Await() {
	Command command = GetCommand();

	if (this->commands.size() > 1) {
		cout << "Previous command: " << this->GetPreviousCommand().ToString() << endl;
	}

	return 0;
}

Command CommandHandler::FormatCommand(Command command) {
	return command;
}

Command CommandHandler::GetCommand() {
	Command command;
	cout << "Enter command: ";
	getline(cin, command.raw);

	commands.push_back(
		FormatCommand(command)
	);

	return command;
}

Command CommandHandler::GetPreviousCommand(int depth) {
	return commands[this->commands.size() - depth];
}

vector<Command> CommandHandler::GetPreviousCommands() {
	return this->commands;
}
