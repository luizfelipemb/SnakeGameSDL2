#include "InputManager.h"

using namespace std;

void InputManager::KeyPressed(SDL_KeyboardEvent& key)
{
	cout<<"key pressed: "<<key.keysym.sym<<endl;
}
