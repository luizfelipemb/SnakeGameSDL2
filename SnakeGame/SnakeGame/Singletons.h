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
private:
	GlobalRenderer() = default;
	SDL_Renderer* IGetRenderer();
	void ICreateRenderer(SDL_Window* window);
	SDL_Renderer* renderer;
};