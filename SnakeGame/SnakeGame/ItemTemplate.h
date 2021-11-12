#pragma once
#include <string>
#include "Singletons.h"
#include "TextureManager.h"
#include "Configs.h"

class ItemTemplate
{
public:
	ItemTemplate(std::string textureDirectory,int posX,int posY, int sizeX, int sizeY);
	void Setup();
	void Render();
	bool CurrentPositionIsEqualTo(int x, int y);

protected:
	virtual void OnSnakeCollision() = 0;
	int positionX;
	int positionY;
private:
	std::string textureDirectory;
	int sizeX;
	int sizeY;
};

