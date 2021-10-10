#ifndef Game_h
#define Game_h
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_mixer.h"
#include "SDL_ttf.h"
#include "Configs.h"
#include "Singletons.h"
#include "Board.h"
#include <iostream>
#include <string>

class Game {
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();
	bool running();

private:
	enum gameState{Idle,Running, Quit};
	void MouseClick(SDL_MouseButtonEvent& b);
	gameState currentState;
	SDL_Window* window;
	int _width, _height;
	Board board;
};

#endif /* Game_h */