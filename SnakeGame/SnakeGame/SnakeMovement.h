#pragma once
#include "InputManager.h"
#include "Snake.h"
class SnakeMovement
{
public:
	SnakeMovement(InputManager& inputManager, Snake& snake);
	void Update();
private:
	InputManager& inputManager;
	Snake& snake;
	Direction lastMoveDirection;
	void StartMove(Direction direction);
	void DoMove();
};

