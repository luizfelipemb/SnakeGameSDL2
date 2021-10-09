#pragma once
#include "SDL_image.h"
#include <iostream>

class TextureComponent
{
public:
	~TextureComponent();
	void LoadTexture(SDL_Renderer* renderer, const char* fileName);
	void Draw(SDL_Renderer* renderer, SDL_Rect* src, SDL_Rect* dest);
private:
	SDL_Texture* texture;
};

