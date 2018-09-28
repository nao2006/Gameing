#include "camera.h"
#include "DxLib.h"
#include "Character.h"

Camera::Camera()
{
	baseRight = 540;
	scrollX = 100;
<<<<<<< HEAD
	pos = 0;
=======
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
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
<<<<<<< HEAD
		pos.x = player->GetPos().x - 640 / 2;
	}
	player->SetLocalPos({ player->GetPos().x - pos.x, player->GetPos().y });
	////ローカル座標を計算
	//player->SetLocalPos({ player->GetPos().x - scrollX, player->GetPos().y + scrollX});

	//if (player->GetLocalPos().x>= baseRight)
	//{
	//	tmpX = player->GetLocalPos().x - baseRight;
	//	scrollX += tmpX;
	//	//background->Draw();
	//}
	//DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
=======
		tmpX = player->GetLocalPos().x - baseRight;
		scrollX += tmpX;
		//background->Draw();
	}
	DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
}

