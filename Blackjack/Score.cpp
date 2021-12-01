#include "Score.h"
#include "Cards.h"
#include <iostream>


void Score::AddPoints(int points)
{
    if (m_value == Value::Two)
    {
        m_points = 2;
    }
    else if (m_value == Value::Three)
    {
        m_points = 3;
    }
    else if (m_value == Value::Four)
    {
        m_points = 4;
    }
    else if (m_value == Value::Five)
    {
        m_points = 5;
    }
    else if (m_value == Value::Six)
    {
        m_points = 6;
    }
    else if (m_value == Value::Seven)
    {
        m_points = 7;
    }
    else if (m_value == Value::Eight)
    {
        m_points = 8;
    }
    else if (m_value == Value::Nine)
    {
        m_points = 9;
    }
    else if (m_value == Value::Ten)
    {
        m_points = 10;
    }
    else if (m_value == Value::Jack)
    {
        m_points = 10;
    }
    else if (m_value == Value::Queen)
    {
        m_points = 10;
    }
    else if (m_value == Value::King)
    {
        m_points = 10;
    }
    else if (m_value == Value::Ace)
    {
        //option for ace value
        std::cout << "\n Which value would you like? Type 1 for value of 1 and type 2 for value of 11\n";
        std::cin >> m_choice;
        if (m_choice == 1)
        {
            m_value = static_cast<Value>(1);
        }
        else if (m_choice == 2)
        {
            m_value = static_cast<Value>(11);
        }
    }
}

int Score::SetScore(int score)
{
	//score - total score
	//points - extra amount added to the total score
	//for (m_card.GetValue() = 2; m_card.GetValue() < 15; m_card.GetValue() ++)
	//{
//	}
	//
	m_score = m_score + static_cast<int>(m_card.GetPoints());
	m_score = m_score + m_newScore;
	//m_something = m_something + m_something.GetPoints();
	//std::cout << m_something << std::endl;
	std::cout << m_score << std::endl;
	std::cout << m_newScore << std::endl;
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
