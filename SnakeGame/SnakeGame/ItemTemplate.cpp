#include "ItemTemplate.h"

ItemTemplate::ItemTemplate(std::string textureDirectory, int posX, int posY, int sizeX, int sizeY) :
textureDirectory(textureDirectory), positionX(posX), positionY(posY), sizeX(sizeX), sizeY(sizeY)
{
	TextureManager::GetInstance().Load(textureDirectory, GlobalRenderer::Get().GetRenderer());
}

void ItemTemplate::Render()
{
	TextureManager::GetInstance().Draw(textureDirectory, positionX, positionY, sizeX, sizeY,
		1, 0, GlobalRenderer::Get().GetRenderer());
}

bool ItemTemplate::CurrentPositionIsEqualTo(int x, int y)
{
	if(positionX==x and positionY==y)
		return true;
	return false;
}
