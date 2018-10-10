#include "DxLib.h"
#include "BackGround.h"

int BackImage;

BackGround::BackGround(Camera* camera)
{
	BackImage = LoadGraph("image/karihaikei.jpg");
	pos = 0;
	this->cam = camera;
}

BackGround::~BackGround()
{

}

void BackGround::Draw()
{

	DrawGraph(pos.x, pos.y, BackImage, true);

}

void BackGround::Updata()
{
	pos.y = -cam->GetPos().y;
}
