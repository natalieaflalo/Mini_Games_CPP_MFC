#pragma once
using namespace std;
#include<iostream>
#include<array>
#include <fstream>

class Game
{
private:

	 int _highScore;
	 int _totalGames;
	 int _totalScore;
	
	
public:
	//0-sudoku, 1-draw line, 2-funnel, 3-memory, 4- logic
	array<int, 5> _arrOfHighScore = { 0 };
	array<int, 5> _arrOfTotalScores = { 0 };
	array<int, 5> _arrOfTotalGames = { 0 };
	Game();
	virtual void setHighScore(int score, int location);
	virtual int getHighScore(int location);
	virtual void setTotalGames(int games, int location);
	virtual int getTotalGames(int location);
	virtual void setTotalScores(int score, int location);
	virtual int getTotalScores(int location);

};

