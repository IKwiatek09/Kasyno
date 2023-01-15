#include "Player.h"
#include <stdlib.h>
#include <iostream>

void Player::RandomizeMoney()
{
	int random = rand() % 4001 + 1000;
	std::cout << random << std::endl;
	money = random;
}

Player::Player()
{
	srand(time(NULL));
	RandomizeMoney();
}

