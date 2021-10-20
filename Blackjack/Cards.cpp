#include <iostream>
#include "Cards.h"

Cards::Cards()
{
	m_points = 0;
	m_choice = 0;
	m_taken = false;
	m_type = Type::Clubs;
	m_value = Value::Two;
}
//getters
Value Cards::GetValue()
{
	return m_value;
}

int Cards::GetPoints()
{
	return m_points;
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
	//why not use a switch?
	//Consider printing the types externally

	if (m_type == Type::Clubs)
	{
		std::cout << " of clubs\n";
	}
	else if (m_type == Type::Diamonds)
	{
		std::cout << " of diamonds\n";
	}
	else if (m_type == Type::Hearts)
	{
		std::cout << " of hearts\n";
	}
	else if (m_type == Type::Spades)
	{
		std::cout << " of spades\n";
	}
}

void Cards::PrintPicture() //(char num)
{
/*
	std::cout << "____________" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "| num        |" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "|        num |" << std::endl;
	std::cout << "|__________|" << std::endl;
}*/

	//if you get jack, queen or king the amount of points is 10
	if (m_value == Value::Two)
	{
		m_picture.two();
		m_points = 2;
		std::cout << m_points << std::endl;
	}
	else if (m_value == Value::Three)
	{
		m_picture.three();
		m_points = 3;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Four)
	{
		m_picture.four();
		m_points = 4;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Five)
	{
		m_picture.five();
		m_points = 5;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Six)
	{
		m_picture.six();
		m_points = 6;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Seven)
	{
		m_picture.seven();
		m_points = 7;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Eight)
	{
		m_picture.eight();
		m_points = 8;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Nine)
	{
		m_picture.nine();
		m_points = 9;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Ten)
	{
		m_picture.ten();
		m_points = 10;
		std::cout << m_points << std::endl;

	}
	else if (m_value == Value::Jack)
	{
		m_picture.jack();
		m_points = 10;
		std::cout << m_points << std::endl;
		std::cout << "Jack" << std::endl;;
	}
	else if (m_value == Value::Queen)
	{
		m_picture.queen();
		m_points = 10;
		std::cout << m_points << std::endl;
		std::cout << "Queen" << std::endl;;
	}
	else if (m_value == Value::King)
	{
		m_picture.king();
		m_points = 10;
		std::cout << m_points << std::endl;
		std::cout << "King" << std::endl;
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
			m_points = 1;
			std::cout << m_points << std::endl;
			std::cout << "Ace" << std::endl;
		}
		else if (m_choice == 2)
		{
			m_value = static_cast<Value>(11);
			m_points = 11;
			std::cout << m_points << std::endl;
			std::cout << "Ace" << std::endl;
		}
	}
}


