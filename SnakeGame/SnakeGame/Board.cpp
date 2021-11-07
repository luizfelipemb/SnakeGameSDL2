#include "Board.h"
#include "GroundTile.h"
using namespace std;
Board::Board()
{
	Setup();
}

Board::~Board()
{

}

void Board::Setup()
{
	cout << "setup start" << endl;
<<<<<<< Updated upstream
	for (size_t y = 0; y < NUM_OF_YLINES; y++)
	{
		for (size_t x = 0; x < NUM_OF_XLINES; x++)
		{
			boardTiles[y][x] = GroundTile();
		}
	}
	snaketexture = GlobalRenderer::LoadTexture(SNAKE_IMAGE);
=======

	backgroundTexture = GlobalRenderer::Get()->LoadTexture(GAME_BACKGROUND);
>>>>>>> Stashed changes
	bgend.w = WINDOW_WIDTH;
	bgend.h = WINDOW_HEIGHT;
	cout<<"setup done"<<endl;
}

void Board::Update()
{
	timer++;
}
void Board::Render()
{
<<<<<<< Updated upstream
	GlobalRenderer::DrawTexture(snaketexture,nullptr,&bgend);
	for (auto row : boardTiles)
		for (auto tile : row)
			tile.Render();
=======
	//GlobalRenderer::Get().DrawTexture(backgroundTexture,nullptr,&bgend);
	snake.Render();
>>>>>>> Stashed changes
}

void Board::Clean()
{

}
