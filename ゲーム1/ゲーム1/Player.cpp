#include "Player.h"
#include "Key.h"
#include "DxLib.h"

//コンストラクタ
Player::Player()
{
	size = { 200,200 };
	hp = 5;
}

//デストラクタ
Player::~Player()
{

}

void Player::Draw()
{
	DrawBox(pos.x, pos.y, pos.x + size.x, pos.y + size.y, GetColor(255, 0, 0), true);
}

void Player::UpData()
{
	if (Key::Get()->CheckKey(KEY_INPUT_RIGHT))
	{
		pos.x++;
	}
	else if (Key::Get()->CheckKey(KEY_INPUT_LEFT))
	{
		pos.x--;
	}

	if (Key::Get()->CheckTrigger(KEY_INPUT_A))
	{
		--hp;
	}
}

