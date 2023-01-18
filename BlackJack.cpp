#include "BlackJack.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

BlackJack::BlackJack()
{
	srand(time(NULL));
}

void BlackJack::randomise()
{
	for (int i = 0; i < 4; i++)
	{
		liczby.push_back(1);
		liczby.push_back(2);
		liczby.push_back(3);
		liczby.push_back(4);
		liczby.push_back(5);
		liczby.push_back(6);
		liczby.push_back(7);
		liczby.push_back(8);
		liczby.push_back(9);
		liczby.push_back(10);
		liczby.push_back(10);
		liczby.push_back(10);
		liczby.push_back(10);
		liczby.push_back(11);
	}


	//losowanie 2 kart dla gracza nr 1
	for (int i = 0; i < 2; i++)
	{
		drawcard(player_score);
	}


	//losowanie 2 kart dla krupiera
	for (int i = 0; i < 2; i++)
	{
		drawcard(dealer_score);
	}

	while (player_score < 21)
	{
		cout << "Czy chcesz dobrac karty?" << endl;
		cout << "1 - tak; 2 - nie" << endl;
		int x;
		cin >> x;

		if (x == 1)
		{
			drawcard(player_score);
		}
	}

	while (dealer_score < 17)
	{
		drawcard(dealer_score);
	}

	if (21 - player_score < 21 - dealer_score)
	{
		cout << "Win" << endl;
	}
	else if (player_score == dealer_score)
	{
		cout << "Draw" << endl;
	}
	else
	{
		cout << "Lost" << endl;
	}

}

void BlackJack::drawcard(int who)
{
	int random = rand() % liczby.size();
	std::cout << liczby[random] << std::endl;
	who += liczby[random];
	liczby.erase(liczby.begin() + random);

}
	//if (result[0] == result[1] && result[1] == result[2])
	//{
		//cout << "Win!" << endl;
	//}
	//else
	//{
		//cout << "Lost" << endl;
	//}
