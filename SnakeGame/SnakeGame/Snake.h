#pragma once
#include <list>
#include "SnakeBodyPart.h"

class Snake
{
public:
	Snake(); 
	void Update();
	void Render();
private:
	std::list<SnakeBodyPart> snakeBodyParts;
};

