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

void Ruletka::StartGame()
{
	std::cout << "Podaj wartosc zakladu: ";
	std::cin >> bet;
}



