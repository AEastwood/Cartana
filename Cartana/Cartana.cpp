// Cartana.cpp : Defines the entry point for the application.

#include "Cartana.h"
#include "src/Models/Commands/CommandHandler/CommandHandler.h"
#include "src/Core/Core.h"

using namespace std;

int main()
{
	Core::Introduce();
	Core::AwaitCommands();

	return 0;
}
