#include <iostream>
#include <map>
#include <vector>
#include "../CommandResult/CommandResult.h"

#pragma once 

using std::map;
using std::string;
using std::vector;

class Command {
private:
	map<string, string> arguments;
	string name;
	CommandResult result;
	int timeout = 60;
	string uuid;

public:
	string raw;

	Command();

	void AddArgument(string argument);
	bool Exits();
	bool Exists();
	
	// Getters
	map<string, string> GetArguments();
	string GetName();
	string GetRaw();
	int GetTimeout();
	string GetUUID();
	
	// Setters
	void SetName(string name);
	void SetTimeout(int timeout);
	void SetUUID();
	
	string ToString();
};

