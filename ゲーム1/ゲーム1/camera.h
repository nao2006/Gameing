#include "Player.h"
#include "Character.h"

class Camera
{
public:
	Camera(Player* player);
	~Camera();
	
	void Updata();
	int scrollX;	//�X�N���[��X���W]

private:
	Player* player;
	int tmpX;
	
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu
};

