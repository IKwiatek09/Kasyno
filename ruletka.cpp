#include "ruletka.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>

Ruletka::Ruletka()
{
	srand(time(NULL));
}

int Ruletka::randomise()
{
	int random = rand() % 37;
	std::cout << random << std::endl;

	return 0;
}

void Ruletka::take_bet()
{
	int value;
	std::cout << "Podaj liczbê od 0 do 36: ";
	std::cin >> value;
}

void Ruletka::verify()
{
	if (random == value)
	{
		std::cout << "Win" << std::endl;
		multiple();
	}
	else
	{
		std::cout << "Lost" << std::endl;
	}
}

void Ruletka::multiple()
{
	bet = 2 * bet;
	std::cout << "Wygra³es " << bet << "z³" << std::endl;
}


void Ruletka::StartGame()
{
	std::cout << "Podaj wartosc zakladu: ";
	std::cin >> bet;
}



