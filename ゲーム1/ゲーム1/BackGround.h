#pragma once
#include "Vector2.h"
#include "Player.h"

class BackGround
{
public:
	BackGround();
	~BackGround();

	void Draw();
	void Updata();
	
	void SetPlayer(Player* player)
	{
		play = player;
	}

private:
	Pos pos;
	Player* play;
};

