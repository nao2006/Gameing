#include "Player.h"
<<<<<<< HEAD
=======
#include "Character.h"
#include "BackGround.h"
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing

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

	Pos GetPos(void) const {
		return pos;
	}



=======
	
	void SetBg(BackGround * bg)
	{
		this->background = bg;
	}

>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
	void Updata();
	
private:
	Player* player;
	int tmpX;
	int scrollX;	//�X�N���[��X���W
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu
};

