#include <iostream>
#include <string>
#include "Log.h"
#include "../Commands/CommandHandler/CommandHandler.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Echo message with custom title
void Echo(string title, string message) {
	cout << "[" + title +"] " << message << "\033[0m" << endl;
}

// Log out error message
void Error(string message) {
	cout << "[Error] \033[31m" << message << "\033[0m" << endl;
}

// Log out message
void Log(string message) {
	cout << "[Log] " << message << "\033[0m" << endl;
}
