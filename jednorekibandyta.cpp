#include "jednorekibandyta.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

jednorekibandyta::jednorekibandyta()
{
	srand(time(NULL));
}

void jednorekibandyta::randomise()
{
	char result[3];
	char options[3] = { 'A','B','C' };

	for (int i = 0; i<3; i++)
	{		
		int random = rand() % 3;
		result[i] = options[random];
		std::cout << result[i] << std::endl;
	}
	
	if (result[0] == result[1] && result[1] == result[2])
	{
		cout << "Win!" << endl;
	}
	else
	{
		cout << "Lost" << endl;
	}
}

void jednorekibandyta::StartGame()
{
	std::cout << "Podaj wartosc zakladu: ";
	std::cin >> bet;
	randomise();
}