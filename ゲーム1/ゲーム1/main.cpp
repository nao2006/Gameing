#include "main.h"
#include "Key.h"
#include "DxLib.h"
#include "Character.h"
#include "Title.h"
#include "Clear.h"
#include "Over.h"
#include "End.h"
#include "Player.h"
#include<iostream>

int winflag = 0;

//���C������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	GameSystemInit();

	Key::Create();

	mode = GAME_TITLE;

	title = new Title();
	clear = new Clear();
	over = new Over();
	end = new End();

	Player pl;

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) != 1)
	{
		Key::Get()->UpData();
		
		ClsDrawScreen();
		pl.Draw();
		pl.UpData();
		switch (mode)
		{
		case GAME_TITLE:
			title->UpData();
			
			break;
		case GAME_MAIN:
			UpData();
			
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

int GameSystemInit()
{
	ChangeWindowMode(true);	// ����޳Ӱ��4
	SetWindowText("Game");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 32);
	if (DxLib_Init() == -1) return -1;	// �������Ɨ���ʉ�
	SetDrawScreen(DX_SCREEN_BACK);
	return 0;
}

void UpData()
{
	DrawString(250, 250, "���C��", GetColor(255, 0, 0));
}
