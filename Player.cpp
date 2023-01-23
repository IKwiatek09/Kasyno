#include "Player.h"
#include <stdlib.h>
#include <iostream>

void Player::RandomizeMoney()
{
	int random = rand() % 4001 + 1000;
	std::cout << random << std::endl;
	money = random;
}



Player::Player(std::string PlayerName)
{
	srand(time(NULL));
	RandomizeMoney();
	name = PlayerName;
}

