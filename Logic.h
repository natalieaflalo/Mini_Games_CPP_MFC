#pragma once
#include "Game.h"
class Logic :
    public Game
{
public:
    Logic();
	void setHighScore(int score, int location = 4);
	int getHighScore(int location = 4);
	void setTotalGames(int games, int location = 4);
	int getTotalGames(int location = 4);
};

