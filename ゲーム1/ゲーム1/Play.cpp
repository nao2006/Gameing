#include "Play.h"
#include "Player.h"
#include "camera.h"

Play::Play()
{
	pl = new Player();
	cam = new Camera(pl);
}

Play::~Play()
{
	delete pl;
}

void Play::Draw()
{
	pl->Draw();
}

void Play::UpData()
{
	cam->Updata();
	pl->UpData();
}
