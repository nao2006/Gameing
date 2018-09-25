#include "Player.h"
#include "Character.h"

class Camera
{
public:
	Camera();
	~Camera();

	// フォーカスをセット
	void SetPl(Player* pl) {
		this->player = pl;
	}
	
	void Updata();
	
private:
	Player* player;
	int tmpX;
	int scrollX;	//スクロールX座標
	int baseRight;	//画面右のスクロール開始位置
};

