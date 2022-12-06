#include <map>
#include <string>
#include <vector>
#include "CommandActions.h"
#include "../../Log/Log.h"

using std::map;
using std::string;
using std::vector;

// Test Action
int CommandActions::TestAction(map<string, string> arguments) {
	Log("This is the Test Action saying Hello :)");
	return 0;
}

int CommandActions::EngineStart(map<string, string> arguments)
{
	Log("Engine started");
	return 0;
}
