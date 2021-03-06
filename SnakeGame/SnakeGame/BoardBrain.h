#pragma once
#include "Configs.h"
#include <iostream>
#include <array>
#include "Singletons.h"
#include "Snake.h"
#include "BoardRenderer.h"
#include "InputManager.h"
#include "SnakeMovement.h"
#include "AppleItem.h"
#include "AppleSpawner.h"

class BoardBrain
{
public:
	BoardBrain();
	~BoardBrain();
	void Setup();
	void Update();
	void Render();
	void Clean();
	void KeyPressed(SDL_KeyboardEvent& key);
private:
	void CheckIfSnakeTookApple();

	int timer;
	const int timerToUpdate = TIMER_TO_UPDATE_SNAKE_IN_SECS * WINDOW_FPS;

	Snake snake;
	BoardRenderer boardRenderer;
	InputManager inputManager;
	SnakeMovement snakeMovement;
	AppleSpawner appleSpawner{ SECS_TO_SPAWN_APPLE };
};

