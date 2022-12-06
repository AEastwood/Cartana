#include <map>
#include <string>

using std::map;
using std::string;

class Engine {

public:
	static int Start(map<string, string> arguments);
	static int Stop(map<string, string> arguments);
};