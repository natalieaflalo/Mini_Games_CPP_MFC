#include "pch.h"
#include "DrawLine.h"
DrawLine::DrawLine(){}
void DrawLine::setHighScore(int score, int location)
{
	Game::setHighScore(score, location);
}

int DrawLine::getHighScore(int location)
{
	return Game::getHighScore(location);
}

void DrawLine::setTotalGames(int games, int location)
{
	Game::setTotalGames(games, location);
}

int DrawLine::getTotalGames(int location)
{
	return Game::getTotalGames(location);
}

void DrawLine::setTotalScores(int score, int location)
{
	Game::setTotalScores(score, location);
}

int DrawLine::getTotalScores(int location)
{
	return Game::getTotalScores(location);
}