#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "../Command/Command.h"

#pragma once

using std::string;
using std::vector;

class ValidCommands {

public:
	typedef int (*FnPtr)(map<string, string>);
	static map<string, FnPtr> Commands;

	static vector<string> ExitCommands;
	static bool Exists(Command* command);
	static bool Exits(Command* command);
	static void Register();
};