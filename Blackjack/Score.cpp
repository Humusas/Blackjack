#include "Score.h"
#include "Cards.h"
#include <iostream>


int Score::AddNewScore()
{
    m_score = m_newScore;
    return m_score;
}

int Score::SetScore(int score)
{
	//score - total score
	//points - extra amount added to the total score
	//for (m_card.GetValue() = 2; m_card.GetValue() < 15; m_card.GetValue() ++)
	//{
//	}
	//
	/*m_score = m_score + static_cast<int>(m_card.GetPoints());
	m_score = m_score + m_newScore;
	//m_something = m_something + m_something.GetPoints();
	//std::cout << m_something << std::endl;
	std::cout << m_score << std::endl;
	std::cout << m_newScore << std::endl;
*/
    m_score = score;
    return m_score;
}



int Score::GetScore()
{
	return m_score;
}

int Score::AddScore(int score)
{
	m_score=m_score + score;

	return m_score;
}

int Score::GetNewScore()
{
	m_newScore = m_card.GetPoints();

	return m_newScore;

	std::cout << m_newScore << std::endl;
}

