#pragma once
#include <SDL_image.h>
#include "Configs.h"
#include "Singletons.h"

class BoardTile
{
public:
	BoardTile(int x, int y);
	void Render();
private:
	SDL_Rect srcRect = { SQUARE_SIZE,SQUARE_SIZE,0,0 };
	SDL_Rect destRect;
	int positionX;
	int positionY;
	SDL_Texture* texture;
};

