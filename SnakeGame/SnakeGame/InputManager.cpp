#include "InputManager.h"

using namespace std;

void InputManager::KeyPressed(SDL_KeyboardEvent& key)
{
	switch (key.keysym.sym) {
		case SDL_KeyCode('w') : 
		{
			currentDirection = DirectionInput::forward;
			break;
		}
		case SDL_KeyCode('s'):
		{
			currentDirection = DirectionInput::backward;
			break;
		}
		case SDL_KeyCode('a'):
		{
			currentDirection = DirectionInput::right;
			break;
		}
		case SDL_KeyCode('d'):
		{
			currentDirection = DirectionInput::left;
			break;
		}
	}
}
