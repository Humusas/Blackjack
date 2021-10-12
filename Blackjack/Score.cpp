#include "Score.h"
#include "Cards.h"
#include <iostream>


Score::Score()
{
	m_score = 0;
	m_points = 0;
}

void Score::CountScore()
{
	//score - total score
	//points - extra amount added to the total score
	m_score = m_score + static_cast<int>(m_card.GetValue());
	std::cout << m_score << std::endl;
}



int Score::GetScore()
{
	return m_score;
}