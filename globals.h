#ifndef GLOBALS
#define GLOBALS

#include <string>
#include <iostream>
#include <SDL.h>
#include "randomNumber.h"

using namespace std;

class Globals{
public:

	//math helpers
	static const float PI;

	//useful for debugging(collisionBox and stuff like that
	static bool debugging;

	//sdl related
	static int ScreenWidth, ScreenHeight, ScreenScale;
	static SDL_Renderer* renderer;

	//clips off header. e.g "clip: 50 114 44 49" turns into "50 114 44 49"
	static string clipOffDataHeader(string data);

	
};

#endif