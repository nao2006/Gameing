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

	// �`��
	virtual void Draw(void) = 0;
	// ����
	virtual void UpData(void) = 0;

protected:
	Pos pos;
	Pos size;
	int hp;

};

