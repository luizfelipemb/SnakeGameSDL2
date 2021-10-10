#include "Board.h"
#include "GroundTile.h"
#include "Game.h"
using namespace std;
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
	background = new TextureComponent();
	background->LoadTexture(Game::renderer, GAME_BACKGROUND);
	destbg.w = WINDOW_WIDTH;
	destbg.h = WINDOW_HEIGHT;
	cout<<"SETUP COMPLETE"<<endl;
}

void Board::Update()
{

}
void Board::Render()
{
	for (auto row : boardTiles)
		for (auto tile : row)
			tile.Render();
	background->Draw(Game::renderer, nullptr, &destbg);
	cout << "RENDER DRAW COMPLETE" << endl;
}

void Board::Clean()
{

}
