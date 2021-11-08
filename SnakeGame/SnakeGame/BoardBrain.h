#pragma once
#include "Configs.h"
#include <iostream>
#include <array>
#include "Singletons.h"
#include "Snake.h"
#include "BoardRenderer.h"
#include "InputManager.h"

class BoardBrain
{
public:
	BoardBrain();
	~BoardBrain();
	void Setup();
	void Update();
	void Render();
	void Clean();
private:
	int timer;
	Snake snake;
	BoardRenderer boardRenderer;
	InputManager inputManager;
};

