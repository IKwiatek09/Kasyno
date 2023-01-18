#pragma once
#include "Games.h"

class BlackJack : public Games
{
public:
	int player_score;
	int dealer_score;
	vector<int> liczby;

	BlackJack();

	void randomise();

	void drawcard();

	//void StartGame();

};

