#include <iostream>
#include "Hardware.h"
#include "../Models/Log/Log.h"
//#include "../../lib/uuid_v4-1.0.0/uuid_v4.h"
//#include "../../lib/uuid_v4-1.0.0/endianness.h"

#pragma once

using std::string;

// Constructor
Hardware::Hardware() {
	this->SetUUID();
}

// Return UUID
string Hardware::GetUUID() {
	return this->uuid;
}

// Set UUID
void Hardware::SetUUID() {
	/*UUIDv4::UUIDGenerator<std::mt19937_64> uuidGenerator;
	UUIDv4::UUID uuid = uuidGenerator.getUUID();

	this->uuid = uuid.str();*/
}
