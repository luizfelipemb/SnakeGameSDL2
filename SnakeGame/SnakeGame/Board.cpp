#include "Board.h"
using namespace std;

Board::Board()
{
}

Board::~Board()
{

}

void Board::Setup()
{
	cout << "setup start" << endl;

	backgroundTexture = GlobalRenderer::Get().LoadTexture(GAME_BACKGROUND);
	bgend.w = WINDOW_WIDTH;
	bgend.h = WINDOW_HEIGHT;

	snake.Setup();
	cout<<"setup done"<<endl;
}

void Board::Update()
{
	timer++;
	snake.Update();
}
void Board::Render()
{
	GlobalRenderer::Get().DrawTexture(backgroundTexture,nullptr,&bgend);
	snake.Render();
}

void Board::Clean()
{

}
