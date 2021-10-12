#include <iostream>
#include "Cards.h"


Cards::Cards()
{
    m_type = static_cast<Type>(NULL);
    m_value = static_cast<Value>(NULL);
    m_points = 0;
    m_choice = 0;
    m_taken = false;
}
//getters
Value Cards::GetValue()
{
    return m_value;
}

bool Cards::GetIsTaken()
{
    return m_taken;
}

Type Cards::GetType()
{
    return m_type;
}
//setters
void Cards::SetIsTaken(bool taken)
{
    m_taken = taken;
}

void Cards::SetValue(int value)
{
    m_value = static_cast<Value>(value);
}

void Cards::SetType(int type)
{
    m_type = static_cast<Type>(type);
}

void Cards::PrintType()
{
    if (m_type == Type::Clubs)
    {
        std::cout << " of clubs\n";
    }
    else if (m_type == Type::Diamonds)
    {
        std::cout << " of diamonds\n";
    }
    else if(m_type == Type::Hearts)
    {
        std::cout << " of hearts\n";
    }
    else if (m_type == Type::Spades)
    {
        std::cout << " of spades\n";
    }
}

void Cards::PrintPicture()
{
    //if you get jack, queen or king the amount of points is 10
    if (m_value == Value::Two)
    {
        m_picture.two();
    }
    else if (m_value == Value::Three)
    {
        m_picture.three();
    }
    else if (m_value == Value::Four)
    {
        m_picture.four();
    }
    else if (m_value == Value::Five)
    {
        m_picture.five();
    }
    else if (m_value == Value::Six)
    {
        m_picture.six();
    }
    else if (m_value == Value::Seven)
    {
        m_picture.seven();
    }
    else if (m_value == Value::Eight)
    {
        m_picture.eight();
    }
    else if (m_value == Value::Nine)
    {
        m_picture.nine();
    }
    else if (m_value == Value::Ten)
    {
        m_picture.ten();
    }
    else if (m_value == Value::Jack)
    {
        m_picture.jack();
    }
    else if (m_value == Value::Queen)
    {
        m_picture.queen();
    }
    else if (m_value == Value::King)
    {
        m_picture.king();
    }
    else if (m_value == Value::Ace)
    {
        m_picture.ace();
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
    if (m_value == Value::Jack)
    {
        std::cout << "Jack";
    }
    else if (m_value == Value::Queen)
    {
        std::cout << "Queen";
    }
    else if (m_value == Value::King)
    {
        std::cout << "King";
    }
    else
    {
        std::cout << static_cast<int>(m_value);
    }
    
}


