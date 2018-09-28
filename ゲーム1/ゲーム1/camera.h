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

	// フォーカスをセット
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
	int scrollX;	//スクロールX座標
	int baseRight;	//画面右のスクロール開始位置

	Pos pos;
};
