#include "Cartana.h"
#include "src/Models/Commands/CommandHandler/CommandHandler.h"
#include "src/Core/Core.h"

#pragma once

using namespace std;

int main()
{
	Core::Introduce();
	Core::AwaitCommands();

	return 0;
}
