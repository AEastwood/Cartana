#include <vector>
#include <map>
#include "../Command/Command.h"

#pragma once

using std::map;
using std::vector;

class ValidCommands {

public:
	static map<string, void(*)()> Commands;
	static vector<string> ExitCommands;
	static bool Exists(Command* command);
	static bool Exits(Command* command);
	static void Register();
};