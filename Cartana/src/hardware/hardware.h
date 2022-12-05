#include <iostream>
#include <string>

#pragma once

using std::string;

class Hardware {

private:
	string uuid;
	void SetUUID();

public:
	Hardware();
	string GetUUID();
};