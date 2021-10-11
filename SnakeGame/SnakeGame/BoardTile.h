#pragma once
#include "Singletons.h"

enum class boardTileType { Ground, Snake, Apple };

class BoardTile
{
public:
	BoardTile();
	~BoardTile();
	void Update();
	void Render();
protected:
	boardTileType type;
	SDL_Texture* texture;
private:
	int positionX;
	int positionY;
	SDL_Rect srcRect, destRect;
};

