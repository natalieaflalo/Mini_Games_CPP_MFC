#include "pch.h"
#include "Funnel.h"
Funnel::Funnel(){}
void Funnel::setHighScore(int score, int location)
{
	Game::setHighScore(score, location);
}

int Funnel::getHighScore(int location)
{
	return Game::getHighScore(location);
}

void Funnel::setTotalGames(int games, int location)
{
	Game::setTotalGames(games, location);
}

int Funnel::getTotalGames(int location)
{
	return Game::getTotalGames(location);
}

void Funnel::setTotalScores(int score, int location)
{
	Game::setTotalScores(score, location);
}

int Funnel::getTotalScores(int location)
{
	return Game::getTotalScores(location);
}