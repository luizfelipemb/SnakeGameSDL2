#pragma once
#include "Configs.h"
#include <iostream>
#include <array>
#include "BoardTile.h"

class Board
{
public:
	Board();
	~Board();
	void Update();
	void Setup();
	void Render();
	void Clean();
private:
	std::array<std::array<BoardTile, NUM_OF_XLINES>, NUM_OF_YLINES> boardTiles;
	int timer;
	SDL_Texture* snaketexture;
	SDL_Rect bgend;
};

