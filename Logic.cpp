#include "pch.h"
#include "Logic.h"
Logic::Logic(){}
void Logic::setHighScore(int score, int location)
{
	Game::setHighScore(score, location);
}

int Logic::getHighScore(int location)
{
	return Game::getHighScore(location);
}

void Logic::setTotalGames(int games, int location)
{
	Game::setTotalGames(games, location);
}

int Logic::getTotalGames(int location)
{
	return Game::getTotalGames(location);
}
