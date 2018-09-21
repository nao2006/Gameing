#include "camera.h"
#include "DxLib.h"
#include "Character.h"

Camera::Camera(Player* player)
{
	this->player = player;
	baseRight = 540;
	scrollX = 0;
}

Camera::~Camera()
{

}

void Camera::Updata()
{
	//ローカル座標を計算
	player->SetLocalPos({ player->GetPos().x - scrollX, player->GetPos().y + scrollX});

	if (player->GetLocalPos().x>= baseRight)
	{
		tmpX = player->GetLocalPos().x - baseRight;
		scrollX += tmpX;
	}
	
	DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
}

