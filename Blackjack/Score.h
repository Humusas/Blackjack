#pragma once
#include "Cards.h"

class Score
{

public:

	void AddPoints(int points); //add card points to score
	Score();

	void SetScore(int score); //resets the score to 0 when 21 or more is reached


	int GetScore();//use this to output the score on the screen
	int GetScore();
	int AddScore(int score);
	int GetNewScore();

	void CountScore();

private:


	Cards m_card;	
	int m_newScore;

	int m_score; //blackjack scorepoints. when reaches 21 - game lost/won
	

	
};

