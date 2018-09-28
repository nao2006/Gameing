<<<<<<< HEAD
#include "DxLib.h"
#include "BackGround.h"

int BackImage;

BackGround::BackGround(Camera* camera )
{
	BackImage = LoadGraph("image/karihaikei.jpg");
	pos = 0;
	this->cam = camera;
=======
#include "BackGround.h"
#include "DxLib.h"

int BackImage;

BackGround::BackGround()
{
	BackImage = LoadGraph("image/karihaikei.jpg");
	pos = 0;
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
}

BackGround::~BackGround()
{
	
}

void BackGround::Draw()
{
	
	DrawGraph(pos.x--, pos.y, BackImage, true);
	
}

void BackGround::Updata()
{
<<<<<<< HEAD
	pos.x = -cam->GetPos().x;
=======

>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
}
