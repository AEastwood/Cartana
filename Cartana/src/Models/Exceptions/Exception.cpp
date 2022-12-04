#include <iostream>
#include <string>
#include "Exception.h"

#pragma once

using std::string;

// Message
string message;

// Status code
int status;

// Constructor
Exception::Exception(string message, int status) {
	this->SetMessage(message);
	this->SetStatus(status);
}

// Return the Exception Message
string Exception::GetMessage() {
	return this->message;
}


// Return the Exception Status
int Exception::GetStatus() {
	return this->status;
}

// Set Message
void Exception::SetMessage(string message) {
	this->message = message;
}

// Set Status
void Exception::SetStatus(int status) {
	this->status = status;
}
