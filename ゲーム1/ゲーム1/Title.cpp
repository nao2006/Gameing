#include "Title.h"
#include "DxLib.h"

//コンストラクタ
Title::Title()
{
}

//デストラクタ
Title::~Title()
{
}

void Title::UpData()
{
	DrawString(250, 250, "タイトル", GetColor(255, 0, 0));
}
