#pragma once
#include "Configs.h"
#include "Singletons.h"
#include <SDL_render.h>

class SnakeBodyPart
{
public:
	SnakeBodyPart();
	void SetPosition(int x, int y);
	void Update();
	void Render();
private:
	SDL_Texture* texture;
	SDL_Rect srcRect = {SQUARE_SIZE,SQUARE_SIZE,0,0};
	SDL_Rect destRect;
	int positionX;
	int positionY;
};

