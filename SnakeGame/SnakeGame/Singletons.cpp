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

SDL_Texture* GlobalRenderer::LoadTexture(const char* fileName)
{
	SDL_Surface* tempSurface = IMG_Load(fileName);
	if (!tempSurface) {
		printf("Texture Fail: %s\n", SDL_GetError());
	}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, tempSurface);
	if (!tex)
	{
		printf("SDL_CreateTextureFromSurface Fail: %s\n", SDL_GetError());
	}
	else {
		printf("SDL_CreateTexture Success!\n");
	}
	SDL_FreeSurface(tempSurface);

	return tex;
}

void GlobalRenderer::DrawTexture(SDL_Texture* texture, SDL_Rect* src, SDL_Rect* dest)
{
	SDL_RenderCopy(renderer, texture, src, dest);
}
