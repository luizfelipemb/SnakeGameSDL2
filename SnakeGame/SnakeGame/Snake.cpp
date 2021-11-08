#include "Snake.h"

Snake::Snake()
{
}

void Snake::Setup()
{
	for (size_t i = 0; i < SNAKE_BEGGINING_SIZE; ++i)
	{
		SnakeBodyPart temp;
		temp.SetPosition(SNAKE_BEGGIN_LINE_X * SQUARE_SIZE, (SNAKE_BEGGIN_LINE_Y+i) * SQUARE_SIZE);
		snakeBodyParts.push_back(temp);
	}
}

void Snake::Update()
{
	for (auto snakePart = snakeBodyParts.begin(); snakePart != snakeBodyParts.end(); snakePart++)
	{
		snakePart->Update();
	}

}

void Snake::Render()
{
	
	for (auto snakePart = snakeBodyParts.begin(); snakePart != snakeBodyParts.end(); snakePart++)
	{
		snakePart->Render();
	}
	
}
