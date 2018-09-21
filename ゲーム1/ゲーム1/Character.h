#pragma once
#include "Vector2.h"
#include "Typedef.h"

class Character
{
public:
	Character() 
	{
		pos = {};
		hp = 0;
	}
	virtual ~Character() 
	{

	}

	// •`‰æ
	virtual void Draw(void) = 0;
	// ˆ—
	virtual void UpData(void) = 0;

	//À•W‚Ìæ“¾
	Pos GetPos(void) 
	{
		return pos;
	}
	Pos GetLocalPos(void)
	{
		return lpos;
	}

	void SetLocalPos(Pos pos)
	{
		lpos = pos;
	}

protected:
	Pos pos;
	Pos lpos;
	Pos size;
	int hp;
	DIR dir;
	

};

