#pragma once
#include "Player.h"

class Camera 
{
public:
	Camera();
	~Camera();

	// �t�H�[�J�X���Z�b�g
	void SetPl(Player* pl) {
		this->player = pl;
	}

	Pos GetPos(void) const {
		return pos;
	}



	void Updata();

private:
	Player* player;
	int tmpX;
	int scrollX;	//�X�N���[��X���W
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu

	Pos pos;
};
