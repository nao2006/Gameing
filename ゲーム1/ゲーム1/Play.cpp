#include "Play.h"
#include "Player.h"
#include "camera.h"

Play::Play()
{
	pl = new Player();
	cam = new Camera();

	cam->SetPl(pl);
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
