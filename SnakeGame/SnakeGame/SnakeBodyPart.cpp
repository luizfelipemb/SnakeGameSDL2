#include "SnakeBodyPart.h"
#include "TextureManager.h"
using namespace std;

SnakeBodyPart::SnakeBodyPart()
{
	positionX = 0;
	positionY = 0;

	TextureManager::Instance()->Load(SNAKE_IMAGE, "snake", GlobalRenderer::Get().GetRenderer());
}

void SnakeBodyPart::SetPosition(int x, int y)
{
	positionX = x;
	positionY = y;
}

void SnakeBodyPart::Update()
{
}

void SnakeBodyPart::Render()
{
	TextureManager::Instance()->Draw("snake", positionX, positionY, SQUARE_SIZE, SQUARE_SIZE, 1, 0, GlobalRenderer::Get().GetRenderer());
}
