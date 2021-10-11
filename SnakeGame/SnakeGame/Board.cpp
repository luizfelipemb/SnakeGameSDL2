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
	for (size_t y = 0; y < NUM_OF_YLINES; y++)
	{
		for (size_t x = 0; x < NUM_OF_XLINES; x++)
		{
			boardTiles[y][x] = GroundTile();
		}
	}
	background = new TextureComponent();
	background->LoadTexture(GlobalRenderer::GetRenderer(),SNAKE_IMAGE);
	bgend.w = WINDOW_WIDTH;
	bgend.h = WINDOW_HEIGHT;
	cout<<"setup done"<<endl;
}

void Board::Update()
{
	timer++;
	if (timer<60)
		background->LoadTexture(GlobalRenderer::GetRenderer(), SNAKE_IMAGE);
	cout<<"board update"<<endl;
}
void Board::Render()
{
	background->Draw(GlobalRenderer::GetRenderer(),nullptr,&bgend);
	for (auto row : boardTiles)
		for (auto tile : row)
			tile.Render();
}

void Board::Clean()
{

}
