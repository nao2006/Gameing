#pragma once
#include "Player.h"

class Camera
{
public:
	Camera();
	~Camera();

	// フォーカスをセット
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
	int scrollX;	//スクロールX座標
	int baseRight;	//画面右のスクロール開始位置

	Pos pos;
};
