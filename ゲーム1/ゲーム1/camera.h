#include "Player.h"
#include "Character.h"
#include "BackGround.h"

class Camera
{
public:
	Camera();
	~Camera();

	// �t�H�[�J�X���Z�b�g
	void SetPl(Player* pl) {
		this->player = pl;
	}
	
	void SetBg(BackGround * bg)
	{
		this->background = bg;
	}

	void Updata();
	
private:
	Player* player;
	BackGround* background;
	int tmpX;
	int scrollX;	//�X�N���[��X���W
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu
};

