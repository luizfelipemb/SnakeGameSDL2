#include "GroundTile.h"

GroundTile::GroundTile()
{
	this->type = boardTileType::Ground;
	this->texture.LoadTexture(GlobalRenderer::GetRenderer(), GROUND_IMAGE);
}
