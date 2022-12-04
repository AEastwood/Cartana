#include <string>

#pragma once

using std::string;

class Exception {

public:
	Exception(string message, int status);

	string message;
	int status;

	string GetMessage();
	int GetStatus();
	void SetMessage(string exMessage = "Exception Thrown");
	void SetStatus(int exStatus = 1);
};