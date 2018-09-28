#include "Play.h"
#include "Player.h"
#include "camera.h"

Play::Play()
{
	pl = new Player();
	cam = new Camera();
	bg = new BackGround();
	cam->SetPl(pl);
	bg->SetPlayer(pl);
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

	cam->Updata();
	pl->UpData();
	bg->Updata();
	
}
