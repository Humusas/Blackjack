#include "Score.h"
#include "Cards.h"
#include <iostream>


int Score::SetScore()
{
	static_cast<int>(m_card);
	m_score = m_score + m_card.GetValue();
	return m_score;

}

int Score::GetScore()
{
	return m_score;
}

