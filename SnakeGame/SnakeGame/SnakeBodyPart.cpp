#include "SnakeBodyPart.h"
using namespace std;

SnakeBodyPart::SnakeBodyPart()
{
	texture = GlobalRenderer::Get()->LoadTexture(SNAKE_IMAGE);
	cout<<"snake body part created!"<<endl;
}

void SnakeBodyPart::SetPosition(int x, int y)
{
	positionX = x;
	positionY = y;
}

void SnakeBodyPart::Update()
{
	srcRect.x = SQUARE_SIZE;
	srcRect.y = SQUARE_SIZE;
	srcRect.w = 0;
	srcRect.h = 0;

	destRect.x = positionX;
	destRect.y = positionY;
	destRect.w = srcRect.w;
	destRect.h = srcRect.h;
}

void SnakeBodyPart::Render()
{
	GlobalRenderer::Get()->DrawTexture(texture, &srcRect, &destRect);
}
