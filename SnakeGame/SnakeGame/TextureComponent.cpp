#include "TextureComponent.h"
#include <iostream>

using namespace std;

TextureComponent::TextureComponent(SDL_Renderer* renderer, const char* fileName)
{
	texture = LoadTexture(renderer, fileName);
}

TextureComponent::~TextureComponent()
{
	SDL_DestroyTexture(texture);
}

SDL_Texture* TextureComponent::LoadTexture(SDL_Renderer* renderer, const char* texture)
{
	SDL_Surface* tempSurface = IMG_Load(texture);
	if (!tempSurface) {
		printf("Texture Fail: %s\n", SDL_GetError());
	}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, tempSurface);
	if (!tex)
	{
		printf("SDL_CreateTextureFromSurface Fail: %s\n", SDL_GetError());
	}
	SDL_FreeSurface(tempSurface);

	return tex;
}
void TextureComponent::Draw(SDL_Renderer* renderer, SDL_Rect* src, SDL_Rect* dest)
{
	SDL_RenderCopy(renderer, texture, src, dest);
}

