#include "keyboardInput.h"

KeyboardInput::KeyboardInput()
{
	UP = SDL_SCANCODE_UP;
	DOWN = SDL_SCANCODE_DOWN;
	RIGHT = SDL_SCANCODE_RIGHT;
	LEFT = SDL_SCANCODE_LEFT;
	SLASH = SDL_SCANCODE_D;
	DASH = SDL_SCANCODE_F;
	REVIVE = SDL_SCANCODE_Q;
}

void KeyboardInput::update(SDL_Event* e)
{
	// button press
	if (e->type == SDL_KEYDOWN)
	{
		if (e->key.keysym.scancode == DASH)
		{
			hero->dash();
		}
		if (e->key.keysym.scancode == SLASH)
		{
			hero->slash();
		}
		if (e->key.keysym.scancode == REVIVE)
		{
			hero->revive();
		}
	}

	// button hold, check if key is still being held
	const Uint8* keystate = SDL_GetKeyboardState(NULL);
	// if hero not able to move or no direction button are being held down then stop moving(slide to a halt)
	if ((hero->state != Hero::HERO_STATE_MOVE && hero->state != Hero::HERO_STATE_IDLE)
		|| (!keystate[UP] && !keystate[DOWN] && !keystate[RIGHT] && !keystate[LEFT]))
	{
		hero->moving = false;
	}
	else
	{
		//up
		if (keystate[UP])
		{
			if (keystate[RIGHT])
				hero->move(270 + 45);
			else if (keystate[LEFT])
				hero->move(270 - 45);
			else
				hero->move(270);
		}

		//down
		if (keystate[DOWN])
		{
			if (keystate[RIGHT])
				hero->move(90 + 45);
			else if (keystate[LEFT])
				hero->move(90 - 45);
			else
				hero->move(90);
		}

		//left
		if (!keystate[UP] && !keystate[DOWN] && !keystate[RIGHT] && keystate[LEFT])
		{
			hero->move(180);
		}

		//right
		if (!keystate[UP] && !keystate[DOWN] && keystate[RIGHT] && !keystate[LEFT])
		{
			hero->move(0);
		}
	}
}