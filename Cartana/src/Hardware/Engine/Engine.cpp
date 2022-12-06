#include <map>
#include <string>
#include "Engine.h"
#include "../../Models/Log/Log.h"

#pragma once

using std::map;
using std::string;

bool Engine::State;

Engine::Engine() {
	Engine::SetEngineState(false);
}

// Get engine state
int Engine::GetEngineState(map<string, string> arguments) {
	Echo("EngineState", (Engine::State) ? "Started" : "Stopped");
	
	return Engine::State;
}

// Set Engine Started
void Engine::SetEngineState(bool state)
{
	Engine::State = state;
}

// Start Engine
int Engine::Start(map<string, string> arguments)
{
	if (Engine::State) {
		Echo("Engine", "Engine Already Started");
		return 1;
	}

	Log("Engine Started");
	SetEngineState(true);

	return 0;
}

// Stop Engine
int Engine::Stop(map<string, string> arguments)
{
	if (!Engine::State) {
		Echo("Engine", "Engine Already Stopped");
		return 1;
	}

	Log("Engine Stopped");
	SetEngineState(false);

	return 0;
}
