#pragma once
#include "Character.h"
#include "DxLib.h"

class Enemy :
	public Character
{
public:
	Enemy();
	~Enemy();

	void Draw();
	void Updata();

private:

};

