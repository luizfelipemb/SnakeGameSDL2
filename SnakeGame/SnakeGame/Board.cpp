#include "Board.h"
#include "GroundTile.h"

Board::Board()
{
}

Board::~Board()
{

}

void Board::Setup()
{
	for (size_t y = 0; y < NUM_OF_YLINES; y++)
	{
		for (size_t x = 0; x < NUM_OF_XLINES; x++)
		{
			boardTiles[y][x] = GroundTile();
		}
	}
}

void Board::Update()
{

}
void Board::Render()
{
	for (auto row : boardTiles)
		for (auto tile : row)
			tile.Render();
}

void Board::Clean()
{

}
