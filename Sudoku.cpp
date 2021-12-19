#include "pch.h"
#include "Sudoku.h"
Sudoku::Sudoku(){}
void Sudoku::setHighScore(int score, int location)
{
	Game::setHighScore(score, location);
}

int Sudoku::getHighScore(int location)
{
	return Game::getHighScore(location);
}

void Sudoku::setTotalGames(int games, int location)
{
	Game::setTotalGames(games, location);
}

int Sudoku::getTotalGames(int location)
{
	return Game::getTotalGames(location);
}

void Sudoku::setTotalScores(int score, int location)
{
	Game::setTotalScores(score, location);
}

int Sudoku::getTotalScores(int location)
{
	return Game::getTotalScores(location);
}