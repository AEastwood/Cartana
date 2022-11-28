#include <iostream>
#include "../resulttypes/resulttypes.h"

#pragma once

using namespace std;

class Result
{
private:
    int timeout = 60;

public:
    int state = ResultTypes::NEW;
};
