#include "DxLib.h"
#include "main.h"
#include "Key.h"
#include "Title.h"
#include "Play.h"
#include "Player.h"
#include "Clear.h"
#include "Over.h"
#include "End.h"
#include "BackGround.h"
#include "Enemy.h"
#include<iostream>

int winflag = 0;
int bgimage;

int GameSystemInit()
{
	ChangeWindowMode(true);	// ����޳Ӱ��4
	SetWindowText("Game");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 32);
	if (DxLib_Init() == -1) return -1;	// �������Ɨ���ʉ�
	SetDrawScreen(DX_SCREEN_BACK);
	return 0;
}

void Draw()
{

}

void UpData()
{

	DrawString(250, 250, "���C��", GetColor(255, 0, 0));
}


//���C������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	GameSystemInit();

	Key::Create();
	mode = GAME_TITLE;

	title = new Title();
	play = new Play();
	enemy = new Enemy();
	clear = new Clear();
	over = new Over();
	end = new End();


	bgimage = LoadGraph("image/haikei.jpg");

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) != 1)
	{
		Key::Get()->UpData();
		ClsDrawScreen();

		switch (mode)
		{
		case GAME_TITLE:
			DrawGraph(25, 25, bgimage, true);
			title->UpData();

			if (Key::Get()->CheckTrigger(KEY_INPUT_SPACE))
			{
				mode = GAME_MAIN;
			}
			break;
		case GAME_MAIN:
			UpData();
			play->Draw();
			play->UpData();
			enemy->Draw();
			

			/*if (player->GetHp() <= 0)
			{
				mode = GAME_OVER;
			}*/
			break;
		case GAME_CLEAR:
			clear->UpData();

			break;
		case GAME_OVER:
			over->UpData();

			break;

		default:
			DrawString(250, 250, "������", GetColor(255, 0, 0));
			break;
		}
		ScreenFlip();
	}

	delete title;

	Key::Destroy();
	DxLib_End();	// DxLib�̌�n��
	return 0;	// ��Ă̏I��

}

