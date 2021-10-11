#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include <string>
#include <random>
#include <time.h>
#include <iostream>

class Random
{
public:
	Random(const Random&) = delete;

	void operator=(const Random&) = delete;

	static Random& Get()
	{
		static Random instance;
		return instance;
	}
	static int GetRandomBetween(int first, int second) { return Get().IGetRandomBetween(first, second); }
private:
	Random() = default;
	int IGetRandomBetween(int first, int second);
	unsigned int seed = time(nullptr);
};

class GlobalRenderer
{
public:
	GlobalRenderer(const GlobalRenderer&) = delete;

	void operator=(const GlobalRenderer&) = delete;

	static GlobalRenderer& Get()
	{
		static GlobalRenderer instance;
		return instance;
	}
	static SDL_Renderer* GetRenderer() { return Get().IGetRenderer(); }
	static void CreateRenderer(SDL_Window* window){return Get().ICreateRenderer(window); }
	static SDL_Texture* LoadTexture(const char* fileName){ return Get().ILoadTexture(fileName); }
	static void DrawTexture(SDL_Texture* texture, SDL_Rect* src, SDL_Rect* dest){ return Get().IDrawTexture(texture,src,dest); };
private:
	GlobalRenderer() = default;
	SDL_Renderer* IGetRenderer();
	void ICreateRenderer(SDL_Window* window);
	SDL_Texture* ILoadTexture(const char* fileName);
	void IDrawTexture(SDL_Texture* texture, SDL_Rect* src, SDL_Rect* dest);
	SDL_Renderer* renderer;
};