#pragma once
#include "Configs.h"
#include "Singletons.h"

class SnakeBodyPart
{
public:
	SnakeBodyPart();
	void SetPosition(int x, int y);
	void Update();
	void Render();
	int GetPosX(){return positionX;}
	int GetPosY(){return positionY;}
private:
	SDL_Texture* texture;
	int positionX;
	int positionY;
};

