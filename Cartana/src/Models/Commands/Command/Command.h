#include <iostream>
#include <vector>
#include "../CommandResult/CommandResult.h"

#pragma once 

using std::string;
using std::vector;

class Command {

public:
	vector<string> arguments;
	string name;
	string raw;
	CommandResult result;
	int timeout = 60;
	int uuid;

	Command();
	void AddArgument(string argument);
	bool Exits();
	bool Exists();
	string GetName();
	string GetRaw();
	void SetArguments(vector<string> arguments);
	void SetName(string name);
	void SetTimeout(int timeout);
	string ToString();

};

