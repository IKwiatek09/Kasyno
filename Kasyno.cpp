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
    string name;
    cout << "Podaj imie" << endl;
    cin >> name;

    Player* CurrentPlayer = new Player(name);

    CurrentPlayer->RandomizeMoney();

    Games* CurrentGame=nullptr;

    char play_again = 'y';

    while (play_again == 'y' && CurrentPlayer->money>0) 
    {
        int wybor;
        cout << "Wybierz gre -> wybierz: 1 - ruletka,2 - BlackJack albo 3 - jednoreki bandyta: ";
        cin >> wybor;

        if (wybor == 1)
        {
            CurrentGame = new Ruletka();
        }
        if (wybor == 2)
        {
            CurrentGame = new BlackJack();
        }
        if (wybor == 3)
        {
            CurrentGame = new jednorekibandyta(CurrentPlayer);
        }

        CurrentGame->StartGame();

        cout << "chcesz grac dalej? y/n" << endl;
        cin >> play_again;
    }

    return 0;

}