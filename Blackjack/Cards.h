#pragma once
#include "Pictures.h"


enum class Type
{
	//the allignment is the same as in the deck[][] matrix. DO NOT TOUCH
	Clubs,
	Hearts,
	Spades,
	Diamonds
};

enum class Value
{
	Two = 2,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Ace
};

class Cards
{
public:

	Cards();
	Value GetValue();
	Type GetType();
	bool GetIsTaken();

	void PrintPicture();
	void PrintType();

	void SetIsTaken(bool taken);
	void SetValue(int value);
	void SetType(int type);

private:

	int m_points;
	Type m_type;
	Value m_value;
	Pictures m_picture;
	int m_choice;
	bool m_taken;

};