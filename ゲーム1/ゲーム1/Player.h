#pragma once
#include "DxLib.h"
class Player
{
public:
	Player();
	~Player();

	void Draw();
	void UpData();

private:
	int x;
	int y;
};

