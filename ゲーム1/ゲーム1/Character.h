#pragma once
#include "Vector2.h"
class Character
{
public:
	Character() {
		pos = {};
		hp = 0;
	}
	virtual ~Character() {

	}

	// •`‰æ
	virtual void Draw(void) = 0;
	// ˆ—
	virtual void UpData(void) = 0;

protected:
	Pos pos;
	Pos size;
	int hp;

};

