#include "Player.h"
#include "Character.h"
#include "BackGround.h"

class Camera
{
public:
	Camera();
	~Camera();

	// フォーカスをセット
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
	int scrollX;	//スクロールX座標
	int baseRight;	//画面右のスクロール開始位置
};

