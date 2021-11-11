#pragma once
#include "ItemTemplate.h"

class AppleItem : public ItemTemplate
{
public:
	using ItemTemplate::ItemTemplate;
	void OnSnakeCollision() override;
};

