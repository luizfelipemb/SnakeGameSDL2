#include "Board.h"

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
	background.LoadTexture(GlobalRenderer::GetRenderer(), GAME_BACKGROUND);
	destbg.w = WINDOW_WIDTH;
	destbg.h = WINDOW_HEIGHT;
}

void Board::Update()
{

}
void Board::Render()
{
	background.Draw(GlobalRenderer::GetRenderer(), nullptr, &destbg);
	for (auto row : boardTiles)
		for (auto tile : row)
			tile.Render();
}

void Board::Clean()
{

}
