#pragma once
#include "Games.h"
#include "Player.h"

class jednorekibandyta : public Games
{
public:
	jednorekibandyta(Player* CurrentPlayer);

	Player* MyPlayer;

	void randomise();
	
	void StartGame();

	void multiple();
};

