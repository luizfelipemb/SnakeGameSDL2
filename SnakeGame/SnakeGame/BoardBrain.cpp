#include "BoardBrain.h"
using namespace std;

BoardBrain::BoardBrain() 
: snakeMovement(inputManager,snake), 
appleTest(APPLE_IMAGE, 1 * SQUARE_SIZE, 1 * SQUARE_SIZE, SQUARE_SIZE, SQUARE_SIZE)
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
	snake.Update();
	cout<<"setup done"<<endl;
}

void BoardBrain::Update()
{
	timer++;
	if (timer >= timerToUpdate)
	{
		timer = 0;
		snakeMovement.Update();
		snake.Update();
	}
}
void BoardBrain::Render()
{
	boardRenderer.Render();
	snake.Render();
	appleTest.Render();
}

void BoardBrain::Clean()
{

}

void BoardBrain::KeyPressed(SDL_KeyboardEvent& key)
{
	inputManager.KeyPressed(key);
}
