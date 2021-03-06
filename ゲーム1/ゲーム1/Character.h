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

	// 描画
	virtual void Draw(void) = 0;
	// 処理
	virtual void UpData(void) = 0;

	//座標の取得
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

