#include "BoardTile.h"

BoardTile::BoardTile()
{

}

BoardTile::~BoardTile()
{

}

void BoardTile::Update()
{
	srcRect.h = 70;
	srcRect.w = 70;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = positionX;
	destRect.y = positionY;
	destRect.w = srcRect.w;
	destRect.h = srcRect.h;
}

void BoardTile::Render()
{
	texture.Draw(GlobalRenderer::GetRenderer(),&srcRect,&destRect);
}
