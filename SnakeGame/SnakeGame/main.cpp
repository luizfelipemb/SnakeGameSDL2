#include "Game.h"
#include "Configs.h"
#if !_DEBUG
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif

Game* game = nullptr;
int main(int argc, char* argv[])
{
	const int frameDelay = 1000 / WINDOW_FPS;

	Uint32 frameStart;
	int frameTime;

	game = new Game();
	game->init(WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, false);

	while (game->running())
	{
		frameStart = SDL_GetTicks();

		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;

		if (frameDelay > frameTime)
		{
			SDL_Delay(frameDelay - frameTime);
		}
	}
	game->clean();

	return 0;
}