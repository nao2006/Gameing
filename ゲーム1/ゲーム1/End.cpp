#include "End.h"
#include"DxLib.h"

//コンストラクタ
End::End()
{
}

//デストラクタ
End::~End()
{
}

void End::UpData()
{
	DrawString(250, 250, "終了", GetColor(255, 140, 200));
}
