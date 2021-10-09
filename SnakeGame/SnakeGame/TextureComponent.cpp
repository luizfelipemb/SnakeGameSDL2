#include "TextureComponent.h"

using namespace std;

TextureComponent::~TextureComponent()
{
	SDL_DestroyTexture(texture);
}

void TextureComponent::LoadTexture(SDL_Renderer* renderer, const char* textureDir)
{
	SDL_Surface* tempSurface = IMG_Load(textureDir);
	if (!tempSurface) {
		printf("Texture Fail: %s\n", SDL_GetError());
	}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, tempSurface);
	if (!tex)
	{
		printf("SDL_CreateTextureFromSurface Fail: %s\n", SDL_GetError());
	}
	else {
		printf("SDL_CreateTexture Success!\n");
	}
	SDL_FreeSurface(tempSurface);
	
	texture = tex;
}
void TextureComponent::Draw(SDL_Renderer* renderer, SDL_Rect* src, SDL_Rect* dest)
{
	if(texture)
		SDL_RenderCopy(renderer, texture, src, dest);
}

