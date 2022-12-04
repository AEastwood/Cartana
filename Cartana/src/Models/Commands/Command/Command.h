#include <iostream>
#include "../CommandResult/CommandResult.h"

#pragma once 

using std::string;

class Command {

public:
	string arguments[5];
	string name;
	string raw;
	CommandResult result;
	int timeout = 60;
	int uuid;

	Command();
	bool Exits();
	bool Exists();
	string GetName();
	string GetRaw();
	void SetTimeout(int timeout);
	string ToString();

};

