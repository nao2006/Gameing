#include "Player.h"
#include "Key.h"
#include "DxLib.h"

//コンストラクタ
Player::Player()
{
	x = 0;
	y = 0;
}

//デストラクタ
Player::~Player()
{
}

void Player::Draw()
{
	DrawBox(x, y, 200+x, 200+y, GetColor(255, 0, 0), true);
}

void Player::UpData()
{
	if (Key::Get()->CheckKey(KEY_INPUT_RIGHT))
	{
		++x;
	}
	else if (Key::Get()->CheckKey(KEY_INPUT_LEFT))
	{
		--x;
	}
}

