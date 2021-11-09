#include "InputManager.h"

using namespace std;

void InputManager::KeyPressed(SDL_KeyboardEvent& key)
{
	switch (key.keysym.sym) {
		case SDL_KeyCode('w') : 
		{
			currentDirection = Direction::forward;
			break;
		}
		case SDL_KeyCode('s'):
		{
			currentDirection = Direction::backward;
			break;
		}
		case SDL_KeyCode('a'):
		{
			currentDirection = Direction::left;
			break;
		}
		case SDL_KeyCode('d'):
		{
			currentDirection = Direction::right;
			break;
		}
	}
}
