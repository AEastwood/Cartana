#include "Core.h"
#include "../Models/Commands/CommandHandler/CommandHandler.h"
#include "../Models/Commands/Command/Command.h"
#include "../Models/Commands/InvalidCommand/InvalidCommand.h"
#include "../Models/Commands/ValidCommands/ValidCommands.h"
#include "../Models/Log/Log.h"

#pragma once

void Core::AwaitCommands() {
	CommandHandler commandHandler;
	Command command;

	commandHandler.Register();

	while (true)
	{
		command = commandHandler.GetCommand();

		if (ValidCommands::Exits(&command)) {
			Log("Exit command entered, exiting..");
			return;
		};
		
		if (!ValidCommands::Exists(&command)) {
			InvalidCommand::Throw(&command);
			continue;
		}

		commandHandler.Handle(&command);
	}
}

// Introduce Engine
void Core::Introduce() {
	cout << "Cartana version 0.0.1" << endl;
}
