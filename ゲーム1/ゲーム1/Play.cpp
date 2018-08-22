#include "Play.h"
#include "Player.h"

Play::Play()
{
	pl = new Player();
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
	pl->UpData();
}
