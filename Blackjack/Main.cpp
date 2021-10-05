#include <iostream>
#include "Cards.h"
#include "Score.h"

void screen();

int main()
{

    //ASCII art
    //blackjack - how to implement it?

    //WINNING CONDITIONS - if you get 21 or below and the dealer gets above 21 - WIN
    //if you get 21 or below and the dealer gets less than you - WIN
    //if the dealer gets 21 or below and you get more than 21 - LOSS
    //if the dealer gets 21 or below and you get less than the dealer -    LOSS
    //if you and the dealer have the same amount of points - DRAW

    //the house draws until they get above 16

    //if the current amount of points + 11 > 21, choose 1, else choose 11
    //player gets to choose whether ace is 1 or 11


    //TODO: randomize cards

    //6 + ace (17 or 7)
    //the dealer is always trying to help the player

    //the player and the dealer get two cards each, everything is revealed. If the player gets 21 and the dealer
    //is below 16, dealer can take a card and vice versa.

    //create a matrix of 52 possibilities (4x13). If a combination has been used, give red flag. If flag is red, combinations don't repeat.


    //=========================VARIABLES
    int start;
    bool isGameRunning = true;
    int newCard;
    Cards cards;
    Score score;

    

 
    
    srand(time(NULL));

    std::cout << "|==========================================|\n";
    std::cout << "|Welcome to blackjack. Will you win against| \n|me or lose? Only one way to find out...   |";
    std::cout << "\n|==========================================|\n\n\n\n";
    std::cout << "Press 1 to start the game.\n\n\n";
    std::cin >> start;

    if (start == 1)
    {
        system("CLS");
    }
    else
    {
        while (start != 1)
        {
            std::cout << "Try again\n";
            std::cin >> start;
        }
    }

    while (isGameRunning)
    {
        screen();
        cards.SetType();
        cards.SetValue();
        

        std::cout << "Press 1 for another random card\n";
        std::cin >> newCard;
        std::cout<< std::endl;
    }
    

	system("pause");
	return 0;
}

void screen()
{
    system("CLS");

    std::cout << "|==========================================|\n";
    std::cout << "| YOUR points :" << score.;
        std::cout << "|==========================================|\n";
    std::cout << std::endl;
    std::cout << std::endl;

}

