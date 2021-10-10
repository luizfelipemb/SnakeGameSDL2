#include "GroundTile.h"
#include "Game.h"
GroundTile::GroundTile()
{
	this->type = boardTileType::Ground;
	this->texture.LoadTexture(Game::renderer, GROUND_IMAGE);
}
