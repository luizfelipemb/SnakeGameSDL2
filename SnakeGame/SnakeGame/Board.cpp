#include "Board.h"
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

	backgroundTexture = GlobalRenderer::LoadTexture(GAME_BACKGROUND);
	bgend.w = WINDOW_WIDTH;
	bgend.h = WINDOW_HEIGHT;
	cout<<"setup done"<<endl;
}

void Board::Update()
{
	timer++;
	snake.Update();
}
void Board::Render()
{
	//GlobalRenderer::DrawTexture(backgroundTexture,nullptr,&bgend);
	snake.Render();
}

void Board::Clean()
{

}
