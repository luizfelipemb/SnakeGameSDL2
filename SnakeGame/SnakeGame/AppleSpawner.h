#pragma once
#include "AppleItem.h"
#include <list>
#include "Singletons.h"


class AppleSpawner
{
public:
	AppleSpawner(int secsToSpawn);
	void Update();
	void RemoveItem(int position);
	std::list<AppleItem> GetAppleList(){return itemList;};
private:
	void SpawnItem();
	std::list<AppleItem> itemList;
	int secsToSpawn;
	int timer;
};

