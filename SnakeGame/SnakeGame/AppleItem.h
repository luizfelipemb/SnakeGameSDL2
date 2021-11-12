#pragma once
#include "ItemTemplate.h"

class AppleItem : public ItemTemplate
{
public:
	using ItemTemplate::ItemTemplate;
	void OnSnakeCollision() override;
	bool operator==(const AppleItem x)
	{
		if (positionX == x.positionX && positionY == x.positionY)
			return true;
		return false;
	}
};

