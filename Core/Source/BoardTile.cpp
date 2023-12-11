#include "BoardTile.h"

BoardTile::BoardTile(int x, int y): positionX(x), positionY(y)
{
	srcRect = { 0,0, SQUARE_SIZE,SQUARE_SIZE };
	destRect = { positionX,positionY, SQUARE_SIZE,SQUARE_SIZE };
	TextureManager::GetInstance().Load(TILE_IMAGE, GlobalRenderer::Get().GetRenderer());
}

void BoardTile::Render()
{
	TextureManager::GetInstance().Draw(TILE_IMAGE, positionX, positionY, SQUARE_SIZE, SQUARE_SIZE,
		1, 0, GlobalRenderer::Get().GetRenderer());
}
