#include "Player.h"
#include "Character.h"

class Camera
{
public:
	Camera();
	~Camera();

	// �t�H�[�J�X���Z�b�g
	void SetPl(Player* pl) {
		this->player = pl;
	}
	
	void Updata();
	
private:
	Player* player;
	int tmpX;
	int scrollX;	//�X�N���[��X���W
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu
};

