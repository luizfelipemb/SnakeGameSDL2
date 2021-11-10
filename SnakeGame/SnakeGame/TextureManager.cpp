#include "TextureManager.h"

bool TextureManager::Load(std::string fileName, SDL_Renderer* renderer)
{
	SDL_Surface* tempSurf = IMG_Load(fileName.c_str());

	if (tempSurf == 0)
	{
		std::cout << "could not load image named: '" << fileName.c_str() << "'!!!" << std::endl;
		return false;
	}

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, tempSurf);

	SDL_FreeSurface(tempSurf);

	if (texture != 0)
	{
		std::cout << "Texture loaded successfully... ('" << fileName.c_str() << "')" << std::endl;
		textureMap[fileName] = texture;
		return true;
	}

	std::cout << "Could not create texture from surface!!! ('" << fileName.c_str() << "')" << std::endl;

	return false;
}

void TextureManager::Draw(std::string filename, int x, int y, int w, int h, double scale, double angle, SDL_Renderer* renderer,
	SDL_RendererFlip flip)
{
	SDL_Rect srcRect, destRect;

	srcRect.x = 0;
	srcRect.y = 0;
	srcRect.w = destRect.w = w;
	srcRect.h = destRect.h = h;
	destRect.x = x;
	destRect.y = y;
	destRect.w *= scale;
	destRect.h *= scale;

	SDL_RenderCopyEx(renderer, textureMap[filename], &srcRect, &destRect, angle, NULL, flip);
}

void TextureManager::DrawFrame(std::string filename, int x, int y, int w, int h, double scale, int currentRow,
	int currentFrame, double r, SDL_Renderer* renderer, SDL_RendererFlip flip)
{
	SDL_Rect srcRect, destRect;

	srcRect.x = w * currentFrame;
	srcRect.y = h * currentRow;
	srcRect.w = destRect.w = w;
	srcRect.h = destRect.h = h;
	destRect.x = x;
	destRect.y = y;
	destRect.w *= scale;
	destRect.h *= scale;

	SDL_RenderCopyEx(renderer, textureMap[filename], &srcRect, &destRect, r, NULL, flip);
}

void TextureManager::ClearFromTextureMap(std::string filename)
{
	textureMap.erase(filename);
}