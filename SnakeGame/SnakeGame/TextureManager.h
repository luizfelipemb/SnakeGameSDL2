#pragma once

#include <string>
#include <map>
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class TextureManager
{
public:

	static TextureManager* Instance()
	{
		if (instance == 0)
		{
			instance = new TextureManager();
		}
		return instance;
	}

	bool Load(std::string fileName, std::string id, SDL_Renderer* renderer);

	void Draw(std::string id, int x, int y, int w, int h, double scale, double r, SDL_Renderer* renderer,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	void DrawFrame(std::string id, int x, int y, int w, int h, double scale, int currentRow, int currentFrame, double angle,
		SDL_Renderer* renderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

	void ClearFromTextureMap(std::string id);

	std::map<std::string, SDL_Texture*> textureMap;

private:

	static TextureManager* instance;

	TextureManager() {}
	~TextureManager() {}

};