#pragma once
#include "Cards.h"

class Score
{

public:

	//Score();

	int SetScore(int score); //resets the score to 0 when 21 or more is reached

	int AddNewScore(); //add card points to score
	int AddScore(int score);

	int GetNewScore();
	int GetScore();//use this to output the score on the screen
	
private:

	Cards m_card;	
	int m_newScore=0;

	int m_score=0; //blackjack scorepoints. when reaches 21 - game lost/won
		
};