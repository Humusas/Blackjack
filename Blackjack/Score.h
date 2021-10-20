#pragma once
#include "Cards.h"

class Score
{

public:

	Score();


	int GetScore();
	int AddScore(int score);
	int GetNewScore();

	void CountScore();

private:


	Cards m_card;	
	int m_newScore;

	int m_score; //blackjack scorepoints. when reaches 21 - game lost/won
	

	
};

