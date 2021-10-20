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

enum class Value //points
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

	int GetPoints();
	Value GetValue();

	

	Type GetType();
	bool GetIsTaken();

	void PrintPicture();
	void PrintType();

	void SetIsTaken(bool taken);
	void SetValue(int value);
	void SetType(int type);

private:

	int m_points; //from enum Value make int points

	Type m_type;
	Value m_value; //card value ACE: 11 or 1
	Pictures m_picture;
	int m_choice;
	bool m_taken;

};