#include <iostream>
#include "../CommandResultType/CommandResultType.h"

#pragma once

class CommandResult
{
private:
    int timeout = 60;

public:
    int state = CommandResultTypes::NEW;
};
