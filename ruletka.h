#pragma once
#include "Games.h"

class Ruletka : public Games
{
public:
	int random;
	int value;
	
	Ruletka();

	int randomise();
	void StartGame();
	void take_bet();
	void verify();
	void multiple();
	void on_lose();
};

