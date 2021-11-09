#include "SnakeMovement.h"

using namespace std;

SnakeMovement::SnakeMovement(InputManager& inputManager, Snake& snake) :
	inputManager(inputManager), snake(snake)
{
}

void SnakeMovement::Update()
{
	switch (inputManager.currentDirection)
	{
		case InputManager::DirectionInput::forward:
			
			break;
		case InputManager::DirectionInput::backward:
			break;
		case InputManager::DirectionInput::right:
			break;
		case InputManager::DirectionInput::left:
			break;
	}
}
