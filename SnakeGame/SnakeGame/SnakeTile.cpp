#include "SnakeTile.h"
#include "Game.h"
SnakeTile::SnakeTile()
{
	this->type = boardTileType::Snake;
	this->texture.LoadTexture(Game::renderer, SNAKE_IMAGE);
}
