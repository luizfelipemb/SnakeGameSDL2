#include "SnakeTile.h"

SnakeTile::SnakeTile()
{
	this->type = boardTileType::Snake;
	this->texture.LoadTexture(GlobalRenderer::GetRenderer(), SNAKE_IMAGE);
}
