#pragma once
#include "TextureComponent.h"
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
	TextureComponent texture;
private:
	int positionX;
	int positionY;
	SDL_Rect srcRect, destRect;
};

