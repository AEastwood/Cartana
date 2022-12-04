#include <iostream>
#include "../CommandResult/CommandResult.h"

#pragma once 

using std::string;

class Command {

public:
	string flags[5];
	string name;
	string raw;
	CommandResult result;
	int uuid;

	Command();

	bool Exits();
	string GetName();
	string GetRaw();
	string ToString();

};

