#include "TextureComponent.h"

using namespace std;

TextureComponent::TextureComponent()
{

}

TextureComponent::~TextureComponent()
{
}

SDL_Texture* TextureComponent::LoadTexture(SDL_Renderer* renderer, const char* fileName)
{
	SDL_Surface* tempSurface = IMG_Load(fileName);
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

	return tex;
}

void TextureComponent::DrawTexture(SDL_Texture* _texture, SDL_Renderer* renderer, SDL_Rect* src, SDL_Rect* dest)
{
	SDL_RenderCopy(renderer, _texture, src, dest);
}