#include "SnakeMovement.h"

using namespace std;

SnakeMovement::SnakeMovement(InputManager& inputManager, Snake& snake) :
	inputManager(inputManager), snake(snake)
{
}

void SnakeMovement::Update()
{
	StartMove(inputManager.currentDirection);
}

void SnakeMovement::StartMove(Direction direction)
{
	switch (direction)
	{
	case Direction::forward:
	{
		if (lastMoveDirection != Direction::backward)
		{
			lastMoveDirection = Direction::forward;
			snake.headY--;
		}
		else
			snake.headY++;
		break;
	}
	case Direction::backward:
	{
		if (lastMoveDirection != Direction::forward)
		{
			lastMoveDirection = Direction::backward;
			snake.headY++;
		}
		else
			snake.headY--;
		break;
	}
	case Direction::right:
	{
		if (lastMoveDirection != Direction::left)
		{
			lastMoveDirection = Direction::right;
			snake.headX++;
		}
		else
			snake.headX--;
		break;
	}
	case Direction::left:
	{
		if (lastMoveDirection != Direction::right)
		{
			lastMoveDirection = Direction::left;
			snake.headX--;
		}
		else
			snake.headX++;
		break;
	}
	}

	if (!snake.CheckIfIsDead())
	{
		DoMove();
	}
	else
		cout << "snake is dead" << endl;
}

void SnakeMovement::DoMove()
{
	SnakeBodyPart temp = snake.snakeBodyParts.back();
	temp.SetPosition(snake.headX * SQUARE_SIZE, snake.headY * SQUARE_SIZE);
	if (!snake.canIncreaseBody)
	{
		snake.snakeBodyParts.pop_back();
	}
	else 
	{
		snake.canIncreaseBody = false;
	}
	
	snake.snakeBodyParts.emplace_front(temp);
}

