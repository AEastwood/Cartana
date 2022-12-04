#include <iostream>

#pragma once

class InvalidCommand {
public:
	static void Throw(Command* command);
};