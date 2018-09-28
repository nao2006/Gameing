#include "Play.h"
#include "Player.h"
#include "camera.h"
#include "BackGround.h"

Play::Play()
{
	pl = new Player();
	cam = new Camera();
	bg = new BackGround(cam);
	cam->SetPl(pl);
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
	pl->UpData();
	cam->Updata();
	bg->Updata();
	
}
