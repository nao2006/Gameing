#include "Player.h"
#include "Key.h"
#include "Typedef.h"
#include "DxLib.h"

int val;
//int GetJoypadInputState(DX_INPUT_KEY_PAD1);

//��񂵂����肵�Ȃ�����
//�R���X�g���N�^
Player::Player()
{
	size = { 48,48 };
	pos = {98, 100};
	hp = 5;
	dir = RIGHT;
	val = LoadGraph("image/���@���L���[.png");
	flam = 0;
	animindex = 0;
}

//�f�X�g���N�^
Player::~Player()
{
	
}

void Player::Draw()
{

	DrawRectGraph(pos.x, pos.y, 
				  size.x * (animindex % 3), size.y * dir, 
				  size.x, size.y, val, TRUE, FALSE);

	flam++;

	if (flam >=  7)
	{
		animindex = (animindex + 1) < 11 ? ++animindex: 0;
		flam = 0;
	}

}

void Player::UpData()
{
	/*int PadInput;
	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);*/

	if (Key::Get()->CheckKey(KEY_INPUT_RIGHT))
	{
		dir = RIGHT;
		pos.x++;
	}
	else if (Key::Get()->CheckKey(KEY_INPUT_LEFT))
	{
		dir = LEFT;
		pos.x--;
	}

	if (Key::Get()->CheckKey(KEY_INPUT_UP))
	{
		dir = UP;
		pos.y--;
	}
	else if (Key::Get()->CheckKey(KEY_INPUT_DOWN))
	{
		dir = DOWN;
		pos.y++;
	}

	if (Key::Get()->CheckTrigger(KEY_INPUT_A))
	{
		--hp;
	}

	//�E�@����
	if (pos.x >= SCREEN_SIZE_X - size.x)
	{
		pos.x = SCREEN_SIZE_X - size.x;
	}

	//������
	if (pos.x <= 0)
	{
		pos.x = 0;
	}

	//������
	if (pos.y >= SCREEN_SIZE_Y - size.y)
	{
		pos.y = SCREEN_SIZE_Y - size.y;
	}

	//�㐧��
	if (pos.y <= 0)
	{
		pos.y = 0;
	}

	//�X�N���[��
	
}
