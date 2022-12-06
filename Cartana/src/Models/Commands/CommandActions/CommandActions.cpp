#include <map>
#include <string>
#include "CommandActions.h"

using std::map;
using std::string;

// Test Action
string CommandActions::TestAction(map<string, string> arguments) {
	return "Argument Size: " + arguments.size();
}
