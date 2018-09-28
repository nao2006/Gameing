#include "camera.h"
#include "DxLib.h"
#include "Character.h"
#include "BackGround.h"

Camera::Camera()
{
	baseRight = 540;
	scrollX = 100;
<<<<<<< HEAD
=======
	pos = 0;
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
}

Camera::~Camera()
{
	delete player;
}

void Camera::Updata()
{
	if (player->GetPos().x >= 640 / 2)
	{
<<<<<<< HEAD
		tmpX = player->GetLocalPos().x - baseRight;
		scrollX += tmpX;
		//background->Draw();
	}
	DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
=======
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
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
}

