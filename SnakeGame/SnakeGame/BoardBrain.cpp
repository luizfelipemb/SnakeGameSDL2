#include "BoardBrain.h"
using namespace std;

BoardBrain::BoardBrain()
{
}

BoardBrain::~BoardBrain()
{

}

void BoardBrain::Setup()
{
	cout << "setup start" << endl;

	boardRenderer.Setup();
	snake.Setup();
	cout<<"setup done"<<endl;
}

void BoardBrain::Update()
{
	timer++;
	snake.Update();
}
void BoardBrain::Render()
{
	boardRenderer.Render();
	snake.Render();
}

void BoardBrain::Clean()
{

}

void BoardBrain::KeyPressed(SDL_KeyboardEvent& key)
{
	inputManager.KeyPressed(key);
}
