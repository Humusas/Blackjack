#include "Score.h"
#include "Cards.h"
#include <iostream>


void Score::AddPoints(int points)
{
    m_score = m_score + points;

    /*if (Cards::GetValue() == Type.GetType())
    {
        m_score = m_score +2;
    }
    else if (m_value == Value::Three)
    {
        m_score = m_score + 3;
    }
    else if (m_value == Value::Four)
    {
        m_score = m_score + 4;
    }
    else if (m_value == Value::Five)
    {
        m_score = m_score + 5;
    }
    else if (m_value == Value::Six)
    {
        m_score = m_score + 6;
    }
    else if (m_value == Value::Seven)
    {
        m_score = m_score + 7;
    }
    else if (m_value == Value::Eight)
    {
        m_score = m_score + 8;
    }
    else if (m_value == Value::Nine)
    {
        m_score = m_score + 9;
    }
    else if (m_value == Value::Ten)
    {
        m_score = m_score + 10;
    }
    else if (m_value == Value::Jack)
    {
        m_score = m_score + 10;
    }
    else if (m_value == Value::Queen)
    {
        m_score = m_score + 10;
    }
    else if (m_value == Value::King)
    {
        m_score = m_score + 10;
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
    }*/
}

void Score::SetScore(int score)
{
	
	m_score = score;


}

int Score::GetScore()
{
	return m_score;
}