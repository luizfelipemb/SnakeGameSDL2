#include "Singletons.h"
using namespace std;

int Random::IGetRandomBetween(int first, int second)
{
	seed++;
	std::mt19937 rng(seed);
	std::uniform_int_distribution<int> gen(first, second);
	int randNum = gen(rng);
	return randNum;
}

SDL_Renderer* GlobalRenderer::GetRenderer()
{
	return renderer;
}

void GlobalRenderer::CreateRenderer(SDL_Window* window)
{
	renderer = SDL_CreateRenderer(window, -1, 0);
	if (renderer)
	{
		SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
		std::cout << "Renderer created!" << std::endl;
	}
	else {
		std::cout << "Renderer not created! error!" << std::endl;
	}
}
