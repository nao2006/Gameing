#include "DxLib.h"
#include "BackGround.h"
#include<memory>

int BackImage1;
int BackImage2;

BackGround::BackGround(Camera* camera)
{
	BackImage1 = LoadGraph("image/karihaikei.jpg");
	BackImage2 = LoadGraph("image/karihaikei.jpg");
	pos = 0;
	this->cam = camera;
}

BackGround::~BackGround()
{

}

void BackGround::Draw()
{

	DrawGraph(pos.x, pos.y, BackImage1, true);

	DrawGraph(pos.x + 900, pos.y, BackImage2, true);

}

void BackGround::Updata()
{
	pos.x = -cam->GetPos().x;
	
}
