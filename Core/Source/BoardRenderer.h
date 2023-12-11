#pragma once
#include "Configs.h"
#include "SDL_image.h"
#include "BoardTile.h"

class BoardRenderer
{
public:
	void Setup();
	void Render();
private:
	std::vector<BoardTile> boardTiles;

};

