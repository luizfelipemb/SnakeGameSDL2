#include "SnakeMovement.h"

using namespace std;

SnakeMovement::SnakeMovement(InputManager& inputManager, Snake& snake) :
	inputManager(inputManager), snake(snake)
{
}

void SnakeMovement::Update()
{
	Move(inputManager.currentDirection);
}

void SnakeMovement::Move(InputManager::Direction direction)
{
	switch (direction)
	{
	case InputManager::Direction::forward:
		snake.headY--;
		break;
	case InputManager::Direction::backward:
		snake.headY++;
		break;
	case InputManager::Direction::right:
		snake.headX++;
		break;
	case InputManager::Direction::left:
		snake.headX--;
		break;
	}

	SnakeBodyPart temp = snake.snakeBodyParts.back();
	temp.SetPosition(snake.headX * SQUARE_SIZE, snake.headY * SQUARE_SIZE);
	snake.snakeBodyParts.pop_back();
	snake.snakeBodyParts.emplace_front(temp);

}
