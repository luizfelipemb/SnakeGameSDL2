#pragma once
#include <list>
#include <vector>
#include "SnakeBodyPart.h"
#include <memory>

class Snake
{
public:
	Snake(); 
	void Setup();
	void Update();
	void Render();
private:
	std::vector<SnakeBodyPart> snakeBodyParts;
	SnakeBodyPart testpart;
};

