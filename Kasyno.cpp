// Kasyno.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BlackJack.h"
#include "Player.h"
#include "ruletka.h"
#include "jednorekibandyta.h"

using namespace std;

int main()
{
    Player Player1;
    Player1.RandomizeMoney();

    Games* CurrentGame=nullptr;

    int wybor;
    cout << "Wybierz gre -> wybierz: 1 - ruletka,2 - BlackJack albo 3 - jednoreki bandyta: ";
    cin >> wybor;

    if (wybor == 1)
    {
        CurrentGame = new Ruletka();
    }
    if (wybor == 2)
    {
        //CurrentGame = new BlackJack();
    }
    if (wybor == 3)
    {
       CurrentGame = new jednorekibandyta();
    }
    
    CurrentGame->StartGame();


    return 0;

}