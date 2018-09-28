#include "camera.h"
#include "DxLib.h"
#include "Character.h"
#include "BackGround.h"

Camera::Camera()
{
	baseRight = 540;
	scrollX = 100;
}

Camera::~Camera()
{
	delete player;
}

void Camera::Updata()
{
	//ローカル座標を計算
	player->SetLocalPos({ player->GetPos().x - scrollX, player->GetPos().y + scrollX});

	if (player->GetLocalPos().x>= baseRight)
	{
		tmpX = player->GetLocalPos().x - baseRight;
		scrollX += tmpX;
		//background->Draw();
	}
	DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
}

