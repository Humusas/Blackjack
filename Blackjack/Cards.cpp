#include <iostream>
#include "Cards.h"



Value Cards::GetValue()
{
    srand(time(NULL));
    return m_value;
}

void Cards::SetPoints()
{
    if (m_value == Value::Two)
    {
        m_points=2;
    }
    else if (m_value == Value::Three)
    {
        m_points=3;
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
        if (m_choice == 1)
        {
            m_points = 1;
        }
        else if (m_choice == 2)
        {
            m_points = 11;
        }
    }
}

void Cards::SetValue()
{
    m_value = static_cast<Value>(rand() % static_cast<int>(Value::King) + 2); // 2-14
    
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
        m_value = static_cast<Value>(10);

    }
    else if (m_value == Value::Queen)
    {
        m_picture.queen();
        m_value = static_cast<Value>(10);
    }
    else if (m_value == Value::King)
    {
        m_picture.king();
        m_value = static_cast<Value>(10);
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
    std::cout << static_cast<int>(m_value);

}

Type Cards::GetType()
{
    srand(time(NULL));
    return m_type;
}



void Cards::SetType()
{
    m_type = static_cast<Type>(rand() % static_cast<int>(Type::Spades) + 1); //1-4

    if (m_type == Type::Clubs)
    {
        std::cout << "Clubs" << std::endl;
    }
    else if (m_type == Type::Diamonds)
    {
        std::cout << "Diamonds" << std::endl;
    }
    else if (m_type == Type::Hearts)
    {
        std::cout << "Hearts" << std::endl;
    }
    else if (m_type == Type::Spades)
    {
        std::cout << "Spades" << std::endl;
    }
}

//52 possible cards in total,

