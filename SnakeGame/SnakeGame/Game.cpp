#include "Game.h"
#include <string>

using namespace std;

SDL_Renderer* Game::renderer = nullptr;

Game::Game() = default;
Game::~Game()
{
	clean();
}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "Subsystems Initialised!..." << std::endl;
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window)
		{
			std::cout << "Window created!" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Renderer created!" << std::endl;
		}
		TTF_Init();

		currentState = gameState::Running;
	}
	else
	{
		currentState = gameState::Idle;
	}
	_width = width; _height = height;
}

void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
		currentState = gameState::Quit;
		break;
	case SDL_MOUSEBUTTONDOWN:
		break;
	case SDL_MOUSEBUTTONUP:
		break;
	case SDL_MOUSEMOTION:
		break;
	case SDL_KEYDOWN:
		break;
	default:
		break;
	}
}

void Game::update()
{

}

void Game::render()
{
	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
	std::cout << "Game Cleaned!" << std::endl;
}

bool Game::running()
{
	if (currentState == gameState::Running)
	{
		return true;
	}
	return false;
}

void Game::MouseClick(SDL_MouseButtonEvent & b)
{
	
}
