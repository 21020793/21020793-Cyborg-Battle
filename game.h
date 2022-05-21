#ifndef GAME
#define GAME

#include "globals.h"
#include "hero.h"
#include "wall.h"
#include "keyboardInput.h"
#include "drawing_functions.h"
#include "glob.h"
#include "soundManager.h"

class Game{
public:
	Mix_Music* song;

	AnimationSet* heroAnimSet;
	AnimationSet* wallAnimSet;
	AnimationSet* globAnimSet;

	SDL_Texture* backgroundImage;
	SDL_Texture* splashImage;
	SDL_Texture* overlayImage;

	SDL_Texture* scoreTexture = NULL; // for drawing strings to the screen

	bool splashShowing;
	float overlayTimer;

	Hero *hero;
	KeyboardInput heroInput;

	list<Entity*> walls;
	list<Entity*> enemies;

	Game();
	~Game();

	void update();
	void draw();

};


#endif