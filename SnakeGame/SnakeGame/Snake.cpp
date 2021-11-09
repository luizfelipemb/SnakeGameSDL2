#include "Snake.h"
using namespace std;

Snake::Snake()
{
}

void Snake::Setup()
{
	headX = SNAKE_BEGGIN_LINE_X;
	headY = SNAKE_BEGGIN_LINE_Y;
	for (size_t i = 0; i < SNAKE_BEGGINING_SIZE; ++i)
	{
		SnakeBodyPart temp;
		temp.SetPosition(SNAKE_BEGGIN_LINE_X * SQUARE_SIZE, (SNAKE_BEGGIN_LINE_Y+i) * SQUARE_SIZE);
		snakeBodyParts.push_back(temp);
	}
}

void Snake::Update()
{
	for (auto snakePart = snakeBodyParts.begin(); snakePart != snakeBodyParts.end(); ++snakePart)
	{
		snakePart->Update();
	}
}

void Snake::Render()
{
	for (auto snakePart = snakeBodyParts.begin(); snakePart != snakeBodyParts.end(); ++snakePart)
	{
		snakePart->Render();
	}
}

bool Snake::CheckIfIsDead()
{
	if(isDead)
		return true;

	if (headX < 0 or headX >= BOARD_NUM_OF_XLINES
		or headY < 0 or headY >= BOARD_NUM_OF_YLINES) 
	{
		isDead = true;
		return true;
	}
	
	for (auto snakePart = ++snakeBodyParts.begin(); snakePart != snakeBodyParts.end(); ++snakePart)
	{
		if (snakePart->GetPosX() == headX * SQUARE_SIZE && snakePart->GetPosY() == headY * SQUARE_SIZE)
		{
			isDead = true;
			return true;
		}
	}
	
	return false;
}