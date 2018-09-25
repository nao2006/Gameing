#pragma once
#include "Vector2.h"

class BackGround
{
public:
	BackGround();
	~BackGround();

	void Draw();
	void Updata();

private:
	Pos pos;
};

