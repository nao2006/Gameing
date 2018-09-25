#include "DxLib.h"
#include "main.h"
#include "Key.h"
#include "Title.h"
#include "Play.h"
#include "Clear.h"
#include "Over.h"
#include "End.h"
#include "camera.h"
#include<iostream>

int winflag = 0;
int bgimage ;
int haiekiimage;

int GameSystemInit()
{
	ChangeWindowMode(true);	// ｳｲﾝﾄﾞｳﾓｰﾄﾞ4
	SetWindowText("Game");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 32);
	if (DxLib_Init() == -1) return -1;	// 初期化と裏画面化
	SetDrawScreen(DX_SCREEN_BACK);
	return 0;
}


void Draw()
{
	haiekiimage =LoadGraph("image/karihaikei.jpg");
}

void UpData()
{
	haiekiimage = LoadGraph("image/karihaikei.jpg");
	DrawString(250, 250, "メイン", GetColor(255, 0, 0));
}


//メイン処理
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	GameSystemInit();

	Key::Create();
	mode = GAME_TITLE;

	title = new Title();
	play = new Play();
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
			DrawGraph(0, 0, haiekiimage, true);
			UpData();
			play->Draw();
			play->UpData();
			
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
			DrawString(250, 250, "ｗｗｗ", GetColor(255, 0, 0));
			break;
		}
		ScreenFlip();
	}

	delete title;

	Key::Destroy();
	DxLib_End();	// DxLibの後始末
	return 0;	// ｿﾌﾄの終了

}

