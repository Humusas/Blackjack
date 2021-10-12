#pragma once
#include "Cards.h"

class Score
{

public:

	Score();
	int GetScore();
	void CountScore();

private:
	Cards m_card;
	int m_score; //blackjack scorepoints. when reaches 21 - game lost/won
	int m_points;

	
};

