#pragma once
#include <SDL_events.h>
#include <iostream>

class InputManager
{
public:
	enum class Direction { forward, backward, right, left };
	void KeyPressed(SDL_KeyboardEvent& key);
	Direction currentDirection;
private:
};

