#include "AppleSpawner.h"

using namespace std;
AppleSpawner::AppleSpawner(int secsToSpawn) : secsToSpawn(secsToSpawn)
{
}

void AppleSpawner::Update()
{
	timer++;
	if (timer / 60 >= secsToSpawn)
	{
		timer = 0;
		SpawnItem();
	}
}

void AppleSpawner::RemoveItem(int position)
{
	auto iterator = itemList.begin();
	advance(iterator, position - 1);
	itemList.erase(iterator);
}

void AppleSpawner::SpawnItem()
{
	int lineX = Random::Get().GetRandomBetween(0, BOARD_NUM_OF_XLINES-1);
	int lineY = Random::Get().GetRandomBetween(0, BOARD_NUM_OF_YLINES-1);
	//check if pos is available

	AppleItem temp {APPLE_IMAGE,lineX*SQUARE_SIZE,lineY*SQUARE_SIZE ,SQUARE_SIZE ,SQUARE_SIZE };
	temp.Setup();
	itemList.push_back(temp);
}
