#pragma once
#include "Player.h"
<<<<<<< HEAD
#include "Character.h"
#include "BackGround.h"
=======
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98

class Camera 
{
public:
	Camera();
	~Camera();

	// �t�H�[�J�X���Z�b�g
	void SetPl(Player* pl) {
		this->player = pl;
	}
<<<<<<< HEAD
	
	void SetBg(BackGround * bg)
	{
		this->background = bg;
	}

=======

	Pos GetPos(void) const {
		return pos;
	}



>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
	void Updata();

private:
	Player* player;
	BackGround* background;
	int tmpX;
	int scrollX;	//�X�N���[��X���W
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu

	Pos pos;
};
