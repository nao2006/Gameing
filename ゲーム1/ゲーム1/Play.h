#pragma once
#include "Scene.h"

class Player;
class Camera;

class Play :
	public Scene
{
public:
	Play();
	~Play();

	void Draw();
	void UpData();

private:
	Player * pl;
	Camera* cam;
};

