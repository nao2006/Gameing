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
	//�v���C���[�̃Q�b�g�|�X(x)��640/2�ȏゾ������
	if (player->GetPos().x >= 640 / 2)
	{
		pos.x = player->GetPos().x - 640 / 2;
	}

	//�X�N���[��
	player->SetLocalPos({ player->GetPos().x - pos.x, player->GetPos().y});
	
	//���[�J�����W���v�Z
	//player->SetLocalPos({ player->GetPos().x - scrollX, player->GetPos().y + scrollX});

	//if (player->GetLocalPos().x>= baseRight)
	//{
	//	tmpX = player->GetLocalPos().x - baseRight;
	//	scrollX += tmpX;
	//	//background->Draw();
	//}
	//DrawLine(baseRight, 0, baseRight, SCREEN_SIZE_Y, 0xff0000, true);
}

