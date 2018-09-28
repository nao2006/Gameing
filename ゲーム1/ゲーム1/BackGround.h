#pragma once
#include "Vector2.h"
#include "Player.h"
<<<<<<< HEAD
#include "camera.h"
=======
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing

class BackGround
{
public:
<<<<<<< HEAD
	BackGround(Camera* camera);
=======
	BackGround();
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
	~BackGround();

	void Draw();
	void Updata();
	
<<<<<<< HEAD
	void SetCamera(Camera* camera)
	{
		cam = camera;
=======
	void SetPlayer(Player* player)
	{
		play = player;
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
	}

private:
	Pos pos;
<<<<<<< HEAD
	Camera* cam;
=======
	Player* play;
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
};

