#include "Clear.h"
#include "DxLib.h"

//コンストラクタ
Clear::Clear()
{
}

//デストラクタ
Clear::~Clear()
{
}

void Clear::UpData()
{
	DrawString(250, 250, "クリアー", GetColor(255, 0, 0));
}
