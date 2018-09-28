<<<<<<< HEAD
#include "BackGround.h"
#include "DxLib.h"

int BackImage;

BackGround::BackGround()
{
	BackImage = LoadGraph("image/karihaikei.jpg");
	pos = 0;
=======
#include "DxLib.h"
#include "BackGround.h"

int BackImage;

BackGround::BackGround(Camera* camera )
{
	BackImage = LoadGraph("image/karihaikei.jpg");
	pos = 0;
	this->cam = camera;
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
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

=======
	pos.x = -cam->GetPos().x;
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
}
