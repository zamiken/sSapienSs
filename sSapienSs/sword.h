#ifndef SWORD_H_
#define SWORD_H_

#include"CommonFunction.h"
#include"BaseTexture.h"

class Sword : public BaseTexture
{
public:
	Sword();

	~Sword();

	void HandleEvent(SDL_Renderer* screen, int st2);

	void Motion(SDL_Renderer* screen);

	int GetSwordStatus()
	{
		return status;
	}

	int GetSwordStatus2()
	{
		return status2;
	}

	void LoadSound()
	{
		mSound = Mix_LoadWAV("Music/Attack.wav");
	}

	void freeSound()
	{
		Mix_FreeChunk(mSound);
		mSound = NULL;
	}

private:
	int status;
	int status2;
	int dem = 0;
	bool dk = 0;

	Mix_Chunk* mSound;
};

#endif