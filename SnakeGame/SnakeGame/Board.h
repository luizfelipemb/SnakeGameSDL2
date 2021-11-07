#pragma once
#include "Configs.h"
#include <iostream>
#include <array>
#include "Singletons.h"
#include "Snake.h"

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
	int timer;
	Snake snake;
	SDL_Texture* backgroundTexture;
	SDL_Rect bgend;
};

