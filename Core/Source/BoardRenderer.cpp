#include "BoardRenderer.h"
#include "Singletons.h"

void BoardRenderer::Setup()
{
	boardTiles.reserve(BOARD_NUM_OF_XLINES* BOARD_NUM_OF_YLINES);
	for (size_t x = 0; x < BOARD_NUM_OF_XLINES; ++x)
	{
		for (size_t y = 0; y < BOARD_NUM_OF_YLINES; ++y)
		{
			BoardTile temp(x * SQUARE_SIZE,y * SQUARE_SIZE);
			boardTiles.push_back(temp);
		}
	}
}

void BoardRenderer::Render()
{
	for (auto tile : boardTiles) 
	{
		tile.Render();
	}
}
