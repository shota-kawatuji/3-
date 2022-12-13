#pragma once

class Scene final
{
private:
	int sceneNo = 0;

private:
	Scene();
	~Scene();

public:
	Scene(const Scene& obj) = delete;
	Scene& operator=(const Scene& obj) = delete;

public:
	static Scene* GetInstance();

public:
	void ChangeScene(int sceneNo);
	int GetScene();
};