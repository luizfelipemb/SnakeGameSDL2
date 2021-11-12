#include "BoardBrain.h"

using namespace std;

BoardBrain::BoardBrain() 
: snakeMovement(inputManager,snake)
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
		CheckIfSnakeTookApple();
	}
	appleSpawner.Update();
}
void BoardBrain::Render()
{
	boardRenderer.Render();
	snake.Render();

	for (auto apple : appleSpawner.GetAppleList())
	{
		apple.Render();
	}
}

void BoardBrain::Clean()
{

}

void BoardBrain::KeyPressed(SDL_KeyboardEvent& key)
{
	inputManager.KeyPressed(key);
}

void BoardBrain::CheckIfSnakeTookApple()
{	
	int pos = 0;
	for (auto apple : appleSpawner.GetAppleList())
	{
		pos++;
		if (apple.CurrentPositionIsEqualTo(snake.GetHeadX() * SQUARE_SIZE, snake.GetHeadY() * SQUARE_SIZE))
		{
			snake.IncreaseBody();
			appleSpawner.RemoveItem(pos);
			break;
		}
	}
}
