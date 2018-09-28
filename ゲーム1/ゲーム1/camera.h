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

	// フォーカスをセット
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
	int scrollX;	//スクロールX座標
	int baseRight;	//画面右のスクロール開始位置
};

