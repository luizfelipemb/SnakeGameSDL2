#pragma once
#include "SDL_image.h"

class TextureComponent
{
public:
	TextureComponent(SDL_Renderer* renderer, const char* fileName);
	~TextureComponent();
	static SDL_Texture* LoadTexture(SDL_Renderer* renderer, const char* fileName);
	void Draw(SDL_Renderer* renderer, SDL_Rect* src, SDL_Rect* dest);
private:
	SDL_Texture* texture;
};

