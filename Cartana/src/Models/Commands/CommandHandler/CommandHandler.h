#include <vector>
#include "../Command/Command.h"

#pragma once

using std::cout;
using std::endl;
using std::vector;

class CommandHandler {
public:
	static vector<Command> commands;
	Command GetCommand();
	static void GetInput(string* property);
	static Command GetPreviousCommand(int depth = 2);
	static vector<Command> GetPreviousCommands();
	Command FormatCommand(Command command);
	
	void Handle(Command* command);
	void Register();
};