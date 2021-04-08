#ifndef HERO_H_
#define HERO_H_

#include"CommonFunction.h"
#include"BaseTexture.h"

class Hero : public BaseTexture
{
public:
	Hero();

	~Hero();

	void HandleEvent(int &hero_jump_condition, int & hero_jump_max, const int max_screen_move);

	void MoveLeft(const Uint8* currentKeyStates);

	void MoveRight(const Uint8* currentKeyStates, const int max_screen_move);

	void MoveUp(const Uint8* currentKeyStates, int& hero_jump_condition, int& hero_jump_max);

	void MoveDown(int &hero_jump_condition);

	void Motion(SDL_Renderer *screen);

	int GetStatus2();

	void TakeHP(int x, bool dk)
	{
		if (dk == 1 && hp > x)
		{
			tick = SDL_GetTicks();
			immortal_status = 1;
		}
		hp = x;
	}

private:
	int status;

	int dem = 0;

	int dk = 0;

	int status2;

	int hp = 0;

	bool immortal_status;

	int dem_immortal;

	Uint32 tick;
};

#endif