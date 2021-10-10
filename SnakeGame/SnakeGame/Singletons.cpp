#include "Singletons.h"


int Random::IGetRandomBetween(int first, int second)
{
	seed++;
	std::mt19937 rng(seed);
	std::uniform_int_distribution<int> gen(first, second);
	int randNum = gen(rng);
	return randNum;
}

