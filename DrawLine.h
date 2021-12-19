#pragma once
#include "Logic.h"
class DrawLine : public Logic
{
private:
public:
	DrawLine();
	void setHighScore(int score, int location=1);
	int getHighScore(int location=1);
	void setTotalGames(int games, int location=1);
	int getTotalGames(int location=1);
	void setTotalScores(int score, int location=1);
	int getTotalScores(int location=1);
};

