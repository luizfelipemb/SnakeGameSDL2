#include "Snake.h"

Snake::Snake()
{
}

void Snake::Setup()
{
	
	for (size_t i = 0; i < SNAKE_BEGGINING_SIZE; ++i)
	{
		SnakeBodyPart temp;
		temp.SetPosition(i * SQUARE_SIZE, i * SQUARE_SIZE);
		snakeBodyParts.push_back(temp);
	}
}

void Snake::Update()
{
	for (auto it = snakeBodyParts.begin(); it != snakeBodyParts.end(); it++)
	{
		it->Update();
	}

}

void Snake::Render()
{
	
	for (auto it = snakeBodyParts.begin(); it != snakeBodyParts.end(); it++)
	{
		it->Render();
	}
	
}
