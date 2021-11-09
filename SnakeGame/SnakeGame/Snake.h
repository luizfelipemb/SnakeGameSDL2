#pragma once
#include <list>
#include "SnakeBodyPart.h"
#include <memory>

class Snake
{
friend class SnakeMovement;
public:
	Snake(); 
	void Setup();
	void Update();
	void Render();
private:
	std::list<SnakeBodyPart> snakeBodyParts;
	int headX;
	int headY;
};

