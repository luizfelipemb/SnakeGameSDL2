#pragma once
#include <string>
#include "Singletons.h"
#include "TextureManager.h"
#include "Configs.h"

class ItemTemplate
{
public:
	ItemTemplate(std::string textureDirectory,int posX,int posY, int sizeX, int sizeY);
	void Render();
	bool CurrentPositionIsEqualTo(int x, int y);
protected:
	virtual void OnSnakeCollision() = 0;
private:
	std::string textureDirectory;
	int positionX;
	int positionY;
	int sizeX;
	int sizeY;
};

