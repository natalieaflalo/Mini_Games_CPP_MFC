#pragma once
#include "Memory.h"

class Funnel :public Memory
{
private:
public:
	Funnel();
	void setHighScore(int score, int location = 2);
	int getHighScore(int location = 2);
	void setTotalGames(int games, int location = 2);
	int getTotalGames(int location = 2);
    void setTotalScores(int score, int location = 2);
	int getTotalScores(int location = 2);
};

