#include "GroundTile.h"

GroundTile::GroundTile()
{
	this->type = boardTileType::Ground;
	this->texture = GlobalRenderer::LoadTexture(GROUND_IMAGE);
}
