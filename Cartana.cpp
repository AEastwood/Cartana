// Cartana.cpp : Defines the entry point for the application.

#include "Cartana.h"
#include "src/core/command/handler/commandhandler.h"
#include "src/core/core.h"

using namespace std;

int main()
{
	Core::Introduce();
	Core::AwaitCommands();

	return 0;
}
