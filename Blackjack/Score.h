#pragma once
#include "Cards.h"

class Score
{
	//Score();
	//~Score();

public:

	void SetPoints();

	int SetScore(int score);


	int GetScore();

private:

	Cards m_card;
	int m_score; //blackjack scorepoints. when reaches 21 - game lost/won
	
};

