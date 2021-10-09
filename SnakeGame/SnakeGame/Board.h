#pragma once
#include "Configs.h"
#include <iostream>

class Board
{
public:
	Board();
	~Board();
	void Update();
	void Setup();
	void Render();
	void Clean();
};

