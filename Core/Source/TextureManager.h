#pragma once

#include <string>
#include <map>
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class TextureManager
{
public:
	TextureManager(const TextureManager&) = delete;

	void operator=(const TextureManager&) = delete;

	static TextureManager& GetInstance()
	{
		static TextureManager instance;
		return instance;
	}

	bool Load(std::string fileName, SDL_Renderer* renderer);
	void Draw(std::string filename, int x, int y, int w, int h, double scale, double r, SDL_Renderer* renderer,
		SDL_RendererFlip flip = SDL_FLIP_NONE);
	void DrawFrame(std::string filename, int x, int y, int w, int h, double scale, int currentRow, int currentFrame, double angle,
		SDL_Renderer* renderer, SDL_RendererFlip flip = SDL_FLIP_NONE);
	void ClearFromTextureMap(std::string filename);
	void ClearAllTextures();
	std::map<std::string, SDL_Texture*> textureMap;

private:
	TextureManager() = default;
};