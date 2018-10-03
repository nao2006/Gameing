#include "Over.h"
#include"DxLib.h"

//コンストラクタ
Over::Over()
{
}

//デストラクタ
Over::~Over()
{
}

void Over::Draw()
{

}

void Over::UpData()
{
	DrawString(250, 250, "オーバー", GetColor(255, 140, 200));
}
