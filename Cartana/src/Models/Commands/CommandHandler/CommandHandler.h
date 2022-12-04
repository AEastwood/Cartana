#include <vector>
#include "../Command/Command.h"

#pragma once

using std::cout;
using std::endl;
using std::vector;

class CommandHandler {

private:
	vector<Command> commands;
	Command FormatCommand(Command command);
	Command GetPreviousCommand(int depth = 2);
	vector<Command> GetPreviousCommands();

public:
	int Await();
	Command GetCommand();
};