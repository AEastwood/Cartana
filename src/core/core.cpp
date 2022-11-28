#include "core.h"

#pragma once

void Core::AwaitCommands() {
	CommandHandler commandHandler;

	do
	{
		commandHandler.Await();
	} while (true);

}

void Core::Introduce() {
	cout << "Cartana version 0.0.1" << endl;
}
