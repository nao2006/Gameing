#include "Player.h"
#include "Key.h"
#include "DxLib.h"

int val;

//コンストラクタ
Player::Player()
{
	size = { 48,48 };
	pos = {98, 100};
	hp = 5;
	val = LoadGraph("image/ヴァルキリー.png");

}

//デストラクタ
Player::~Player()
{

}

void Player::Draw()
{
	DrawRectGraph(pos.x, pos.y, size.x * 0, size.y * 2, size.x , size.y , val, TRUE, FALSE);
	//DrawBox(pos.x, pos.y, pos.x + size.x, pos.y + size.y, GetColor(255, 0, 0), true);
	//DeleteGraph(val);
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

