#include "SnakeTile.h"

SnakeTile::SnakeTile()
{
	this->type = boardTileType::Snake;
	this->texture = GlobalRenderer::LoadTexture(SNAKE_IMAGE);
}
