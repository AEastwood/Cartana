#include <map>
#include <string>

#include "Engine.h"
#include "../../Models/Log/Log.h"

using std::map;
using std::string;

// Start Engine
int Engine::Start(map<string, string> arguments)
{
	Log("Engine Started");

	return 0;
}

// Stop Engine
int Engine::Stop(map<string, string> arguments)
{
	Log("Engine Stopped");

	return 0;
}

