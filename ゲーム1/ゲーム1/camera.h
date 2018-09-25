#include "Player.h"
#include "Character.h"

class Camera
{
public:
	Camera(Player* player);
	~Camera();
	
	void Updata();
	int scrollX;	//スクロールX座標]

private:
	Player* player;
	int tmpX;
	
	int baseRight;	//画面右のスクロール開始位置
};

