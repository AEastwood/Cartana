#include "Core.h"
#include "../Models/Commands/CommandHandler/CommandHandler.h"
#include "../Models/Commands/Command/Command.h"

#pragma once

using std::cout;
using std::endl;

void Core::AwaitCommands() {
	CommandHandler commandHandler;
	Command command;

	do
	{
		command = commandHandler.GetCommand();

		if (command.Exits()) return;

		commandHandler.Await();
	} while (true);

}

void Core::Introduce() {
	cout << "Cartana version 0.0.1" << endl;
}
