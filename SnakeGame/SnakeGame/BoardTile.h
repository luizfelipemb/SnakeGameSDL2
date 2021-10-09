#pragma once
#include "TextureComponent.h"

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
};

