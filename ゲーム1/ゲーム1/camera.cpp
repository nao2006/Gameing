#include "camera.h"
#include "DxLib.h"
#include "Character.h"

Camera::Camera()
{
	baseRight = 540;
	scrollX = 100;
	pos = 0;
}

Camera::~Camera()
{
	delete player;
}

void Camera::Updata()
{
	//プレイヤーのゲットポス(x)が640/2以上だったら
	if (player->GetPos().x >= 640 / 2)
	{
		pos.x = player->GetPos().x - 640 / 2;
		
	}

	//スクロール
	player->SetLocalPos({ player->GetPos().x - pos.x, player->GetPos().y});
	
	//ローカル座標を計算
	//player->SetLocalPos({ player->GetPos().x - scrollX, player->GetPos().y + scrollX});

	//if (player->GetLocalPos().x>= baseRight)
	//{
	//	tmpX = player->GetLocalPos().x - baseRight;
	//	scrollX += tmpX;
	//	//background->Draw();
	//}
	//DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
}

