#pragma once
#include "Character.h"
#include <DxLib.h>

class Player : 
	public Character
{
public:
	Player();
	~Player();

	void Draw();
	void UpData();
	
	int GetHp(void) const 
	{
		return hp;
	}

	void SetHp(int hp) 
	{
		this->hp = hp;
	}
	
	 
private:
	int flam;
	int animindex;
};

