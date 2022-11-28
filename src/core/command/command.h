#include <iostream>
#include "../command/result/result.h"

#pragma once 

using std::string;

class Command {

public:
	string flags[5];
	string name;
	string raw;
	Result result;
	int uuid;

	Command();

	string GetName();
	string GetRaw();
	string ToString();

};

