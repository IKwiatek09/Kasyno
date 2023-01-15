// Kasyno.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BlackJack.h"
#include "Player.h"
#include "ruletka.h"

using namespace std;

int main()
{
    Player Player1;
    Player1.RandomizeMoney();

    Games* CurrentGame;

    int wybor;
    cout << "Wybierz gre: ";
    cin >> wybor;

    if (wybor == 1)
    {
        CurrentGame = new Ruletka();
    }

    CurrentGame->StartGame();


    return 0;

}