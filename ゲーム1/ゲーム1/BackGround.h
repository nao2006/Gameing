#pragma once
#include "Vector2.h"
#include "Player.h"
<<<<<<< HEAD
=======
#include "camera.h"
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98

class BackGround
{
public:
<<<<<<< HEAD
	BackGround();
=======
	BackGround(Camera* camera);
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
	~BackGround();

	void Draw();
	void Updata();
	
<<<<<<< HEAD
	void SetPlayer(Player* player)
	{
		play = player;
=======
	void SetCamera(Camera* camera)
	{
		cam = camera;
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
	}

private:
	Pos pos;
<<<<<<< HEAD
	Player* play;
=======
	Camera* cam;
>>>>>>> 58dee56611fa9380312ccb66d0f2ccac36f79d98
};

