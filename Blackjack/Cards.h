#pragma once
#include "Pictures.h"


enum class Type
{
	Clubs = 1,
	Diamonds,
	Hearts,
	Spades
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

	//void SetPoints();

	Value GetValue();
	void SetValue();

	Type GetType();
	void SetType();
	void Matrix();

private:

	int m_points;
	Type m_type;
	Value m_value;
	Pictures m_picture;
	int m_choice;
	int m_matrix[4][13];






};