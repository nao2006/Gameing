#include "Player.h"
#include "Key.h"
#include "DxLib.h"

int val;
//int GetJoypadInputState(DX_INPUT_KEY_PAD1);

//�R���X�g���N�^
Player::Player()
{
	size = { 48,48 };
	pos = {98, 100};
	hp = 5;
	val = LoadGraph("image/���@���L���[.png");

}

//�f�X�g���N�^
Player::~Player()
{

}

void Player::Draw()
{
	static int flam = 0;
	static int index = 0;
	DrawRectGraph(pos.x, pos.y, 
		size.x * (index % 3), size.y * (index / 3) , 
		size.x , size.y , val,TRUE, FALSE);

	//DrawBox(pos.x, pos.y, pos.x + size.x, pos.y + size.y, GetColor(255, 0, 0), true);
	//DeleteGraph(val);
	++flam;
	if (flam >= 10)
	{
		index = (index + 1) < 11 ? ++index : 0;
		flam = 0;
	}
}

void Player::UpData()
{
	/*int PadInput;
	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);*/

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

