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

	// �`��
	virtual void Draw(void) = 0;
	// ����
	virtual void UpData(void) = 0;

	//���W�̎擾
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

