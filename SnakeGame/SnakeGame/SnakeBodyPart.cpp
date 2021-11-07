#include "SnakeBodyPart.h"
using namespace std;

SnakeBodyPart::SnakeBodyPart()
{
	positionX = 0;
	positionY = 0;
	srcRect = { 0,0, SQUARE_SIZE,SQUARE_SIZE };
	destRect = { positionX,positionY, SQUARE_SIZE,SQUARE_SIZE };
	texture = GlobalRenderer::Get().LoadTexture(SNAKE_IMAGE);
}

void SnakeBodyPart::SetPosition(int x, int y)
{
	positionX = x;
	positionY = y;
}

void SnakeBodyPart::Update()
{
	destRect.x = positionX;
	destRect.y = positionY;
}

void SnakeBodyPart::Render()
{
	GlobalRenderer::Get().DrawTexture(texture, &srcRect, &destRect);
}
