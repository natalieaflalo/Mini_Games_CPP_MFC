#pragma once
#include "Game.h"
class Memory :public Game
{
public:
	Memory();
	void setHighScore(int score, int location = 3);
	int getHighScore(int location = 3);
	void setTotalGames(int games, int location = 3);
	int getTotalGames(int location = 3);
};

