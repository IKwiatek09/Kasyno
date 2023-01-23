#pragma once
 class Games
{
public:
	int bet = 0;

	virtual void StartGame()=0;

	void on_lose();

};

