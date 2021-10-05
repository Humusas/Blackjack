#include "Score.h"
#include "Cards.h"
#include <iostream>



int Score::SetScore()
{
	m_score = m_score + Cards::m_value;

}

int Score::GetScore()
{
	return m_score;
}
