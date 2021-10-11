#pragma once
#include "SDL_image.h"
#include <iostream>

class TextureComponent
{
public:
	TextureComponent();
	~TextureComponent();
	static SDL_Texture* LoadTexture(SDL_Renderer* renderer, const char* fileName);
	void DrawTexture(SDL_Texture* texture, SDL_Renderer* renderer, SDL_Rect* src, SDL_Rect* dest);
};

