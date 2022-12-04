#include <iostream>
#include "../Command/Command.h"
#include "../InvalidCommand/InvalidCommand.h"
#include "../../Log/Log.h"

#pragma once

void InvalidCommand::Throw(Command* command) {
	Error("Invalid Command: " + command->GetName());
}
