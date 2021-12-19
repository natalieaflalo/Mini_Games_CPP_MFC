#pragma once
#include "Logic.h"
class Sudoku :
    public Logic
{
public:
	Sudoku();
	void setHighScore(int score, int location = 0);
	int getHighScore(int location = 0);
	void setTotalGames(int games, int location = 0);
	int getTotalGames(int location = 0);
	void setTotalScores(int score, int location = 0);
	int getTotalScores(int location = 0);
};

