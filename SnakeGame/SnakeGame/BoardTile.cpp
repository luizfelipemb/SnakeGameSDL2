#include "BoardTile.h"

BoardTile::BoardTile(int x, int y): positionX(x), positionY(y)
{
	srcRect = { 0,0, SQUARE_SIZE,SQUARE_SIZE };
	destRect = { positionX,positionY, SQUARE_SIZE,SQUARE_SIZE };
	texture = GlobalRenderer::Get().LoadTexture(TILE_IMAGE);
}

void BoardTile::Render()
{
	GlobalRenderer::Get().DrawTexture(texture,&srcRect,&destRect);
}
