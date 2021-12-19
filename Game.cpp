#include "pch.h"
#include "Game.h"
Game::Game()
{
}

void Game::setHighScore(int score, int location)
{
	int high;
	ifstream outfile2("HighScore.txt");
	outfile2 >> high;
	outfile2.close();
	ofstream outfile("HighScore.txt");
	if (score > _arrOfHighScore[location])
		this->_arrOfHighScore[location] = score;

	if (score > high)
	{
		this->_highScore = score;
	    outfile << score;
    }
	outfile.close();
}

int Game::getHighScore(int location)
{
	return this->_arrOfHighScore[location];
}

void Game::setTotalGames(int games, int location)
{
	int numgame;
	ifstream outfile2("TotalGames.txt");
	outfile2 >> numgame;
	outfile2.close();
	numgame = numgame + games;
	_arrOfTotalGames[location] = _arrOfTotalGames[location] + games;
	this->_totalGames = this->_totalGames + games;
	ofstream outfile("TotalGames.txt");
	outfile << numgame;
	outfile.close();
}

int Game::getTotalGames(int location)
{
	return this->_arrOfTotalGames[location];
}

void Game::setTotalScores(int score, int location)
{
	int Totscore;
	ifstream outfile2("TotalScore.txt");
	outfile2 >> Totscore;
	outfile2.close();
	_arrOfTotalScores[location] = _arrOfTotalScores[location] + score;
	this->_totalScore = this->_totalScore + score;
	Totscore = Totscore + score;
	ofstream outfile("TotalScore.txt");
	outfile << Totscore;
	outfile.close();
}
int Game::getTotalScores(int location)
{
	return this->_arrOfTotalScores[location];
}