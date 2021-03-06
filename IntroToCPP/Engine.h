#pragma once
#include "Entity.h"
#include "Scene.h"


class Engine
{
public:
	Engine();
	~Engine();
	void run();

	static bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationShouldClose(bool value) { m_applicationShouldClose = value; }

	static void addScene(Scene* scene);
	static Scene* getCurrentScene();
	void setCurrentScene(int index);

private:
	void start();
	void update();
	void draw();
	void end();

	

private:
	static bool m_applicationShouldClose;
	Entity m_entities[3];
	Entity* m_currentFighter1;
	Entity* m_currentFighter2;
	Entity* entites;

	
	

	int m_currentFighterIndex;
	int m_entityCount;
	

	Scene** m_scenes;
	int m_sceneCount;
	int m_currentSceneIndex;

};