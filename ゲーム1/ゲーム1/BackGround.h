#pragma once
#include "Vector2.h"
#include "Player.h"
#include "camera.h"

class BackGround
{
public:
	BackGround(Camera* camera);
	~BackGround();

	void Draw();
	void Updata();
	
	void SetCamera(Camera* camera)
	{
		cam = camera;
	}

private:
	Pos pos;
	Camera* cam;
};

