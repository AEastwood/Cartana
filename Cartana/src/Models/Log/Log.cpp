#include <iostream>
#include <string>
#include "Log.h"
#include "../Commands/CommandHandler/CommandHandler.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Log out error message
void Error(string message) {
	cout << "[Error] \033[31m" << message << "\033[0m" << endl;
}

// Get user input and set it to the proposed property
void GetInput(string* property) {
	cout << "Enter command: ";
	getline(cin, *property);
}

// Log out message
void Log(string message) {
	cout << "[Log] " << message << "\033[0m" << endl;
}


// Test function to see a basic principle of reflection for commands
void Test() {
	Log("this is a test");
}
