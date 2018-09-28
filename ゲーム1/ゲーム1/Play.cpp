#include "Play.h"
#include "Player.h"
#include "camera.h"

Play::Play()
{
	pl = new Player();
	cam = new Camera();
<<<<<<< HEAD
	bg = new BackGround(cam);
	cam->SetPl(pl);
=======
	bg = new BackGround();
	cam->SetPl(pl);
	bg->SetPlayer(pl);
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
}

Play::~Play()
{
	delete pl;
}

void Play::Draw()
{
	bg->Draw();
	pl->Draw();
	
}

void Play::UpData()
{
<<<<<<< HEAD
	pl->UpData();
	cam->Updata();
=======

	cam->Updata();
	pl->UpData();
>>>>>>> parent of f5856bf... Merge branch 'master' of https://github.com/nao2006/Gameing
	bg->Updata();
	
}
