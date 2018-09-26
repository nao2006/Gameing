#include "BackGround.h"
#include "DxLib.h"

int BackImage;
BackGround::BackGround()
{
	BackImage = LoadGraph("image/karihaikei.jpg");
	pos = 0;
}

BackGround::~BackGround()
{
	
}

void BackGround::Draw()
{
	DrawGraph(pos.x--, pos.y, BackImage,true);
}

void BackGround::Updata()
{

}
