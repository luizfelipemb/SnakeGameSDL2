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
	int GetHeadX(){return headX;};
	int GetHeadY(){return headY;};
	void IncreaseBody();
private:
	std::list<SnakeBodyPart> snakeBodyParts;
	int headX;
	int headY;
	bool CheckIfIsDead();
	bool isDead = false;
	bool canIncreaseBody = false;
};

