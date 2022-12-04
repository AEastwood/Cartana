#include <iostream>
#include <map>
#include <vector>
#include "../CommandResult/CommandResult.h"

#pragma once 

using std::map;
using std::string;
using std::vector;

class Command {

public:
	map<string, string> arguments;
	string name;
	string raw;
	CommandResult result;
	int timeout = 60;
	string uuid;

	Command();

	void AddArgument(string argument);
	bool Exits();
	bool Exists();
	string GetName();
	string GetRaw();
	string GetUUID();
	void SetName(string name);
	void SetTimeout(int timeout);
	void SetUUID();
	string ToString();

};

