#include "Player.h"
#include "Character.h"

class Camera
{
public:
	Camera(Player* player);
	~Camera();
	
	void Updata();
	
private:
	Player* player;
	int tmpX;
	int scrollX;	//�X�N���[��X���W
	int baseRight;	//��ʉE�̃X�N���[���J�n�ʒu
};

