#pragma once
class Scene
{
public:
	Scene()
	{

	}
	virtual ~Scene()
	{

	}

	virtual void Draw() = 0;
	virtual void UpData() = 0;
};

