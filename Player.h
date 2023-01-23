#pragma once
#include <string>
class Player
{
public:
	int money = 0;	

	std::string name;

	void RandomizeMoney();

	Player(std::string PlayerName);
};

