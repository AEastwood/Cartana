#include <map>
#include <string>

#pragma once

using std::map;
using std::string;

class Engine {

private:
	static bool State;

public:

	Engine();
	static int GetEngineState(map<string, string> arguments);
	static void SetEngineState(bool engineState);
	static int Start(map<string, string> arguments);
	static int Stop(map<string, string> arguments);
};