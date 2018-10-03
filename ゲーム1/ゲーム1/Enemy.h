#pragma once
#include "Character.h"
#include "Enemy.h"

class Enemy :
	public Character
{
public:
	Enemy();
	~Enemy();

	void Draw();
	void UpData();
};

