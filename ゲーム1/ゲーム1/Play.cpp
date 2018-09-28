#include "Play.h"
#include "Player.h"
#include "camera.h"
#include "BackGround.h"

Play::Play()
{
	pl = new Player();
	cam = new Camera();
<<<<<<< HEAD
	bg = new BackGround();
	cam->SetPl(pl);
	bg->SetPlayer(pl);
=======
	bg = new BackGround(cam);
	cam->SetPl(pl);
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
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

	cam->Updata();
	pl->UpData();
=======
	pl->UpData();
	cam->Updata();
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
	bg->Updata();
	
}
