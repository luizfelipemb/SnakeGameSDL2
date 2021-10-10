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
