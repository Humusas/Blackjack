#pragma once
#include "Cards.h"

class Score
{
	//Score();
	//~Score();

public:

	void SetPoints();
	int SetScore();
	int GetScore();

private:

	Cards m_card;
	int m_score;
	
};

