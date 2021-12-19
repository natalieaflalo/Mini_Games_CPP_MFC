#include "pch.h"
#include "Memory.h"
Memory::Memory(){}
void Memory::setHighScore(int score, int location)
{
	Game::setHighScore(score, location);
}

int Memory::getHighScore(int location)
{
	return Game::getHighScore(location);
}

void Memory::setTotalGames(int games, int location)
{
	Game::setTotalGames(games, location);
}

int Memory::getTotalGames(int location)
{
	return Game::getTotalGames(location);
}