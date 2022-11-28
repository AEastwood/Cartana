#include <vector>
#include "../command.h"

#pragma once

using std::cout;
using std::endl;
using std::vector;

class CommandHandler {

private:
	vector<Command> commands;
	Command FormatCommand(Command command);
	Command GetCommand();
	Command GetPreviousCommand(int depth = 2);
	vector<Command> GetPreviousCommands();

public:
	int Await();
};