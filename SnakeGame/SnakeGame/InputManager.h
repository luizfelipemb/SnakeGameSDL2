#pragma once
#include <SDL_events.h>
#include <iostream>
class InputManager
{
public:
	void KeyPressed(SDL_KeyboardEvent& key);
	enum class DirectionInput { forward, backward, right, left };
	DirectionInput currentDirection;
private:
};

