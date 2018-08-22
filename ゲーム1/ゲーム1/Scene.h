#pragma once
class Scene
{
public:
	Scene();
	virtual ~Scene();

	virtual void UpData() = 0;
};

