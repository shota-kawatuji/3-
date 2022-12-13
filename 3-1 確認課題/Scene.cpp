#include "scene.h"

Scene::Scene() {}

Scene::~Scene() {}

Scene* Scene::GetInstance()
{
	static Scene instance;
	return &instance;
}

void Scene::ChangeScene(int sceneNo)
{
	this->sceneNo = sceneNo;
}

int Scene::GetScene()
{
	return sceneNo;
}