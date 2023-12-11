#pragma once
#include <SDL_events.h>
#include <iostream>

enum class Direction { forward, backward, right, left };
class InputManager
{
public:
	void KeyPressed(SDL_KeyboardEvent& key);
	Direction currentDirection;
private:
};

