#include "Engine.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;
	m_currentFighterIndex = 0;
	

}

Engine::~Engine()
{
	delete m_currentFighter1;
	delete m_currentFighter2;
	delete[] entites;
}

void Engine::run()
{
	start();

	while (!getApplicationShouldClose())
	{
		update();
		draw();
	}

	end();
}

void Engine::addScene(Scene* scene)
{
}

Scene* Engine::getCurrentScene()
{
	return nullptr;
}

void Engine::setCurrentScene(int index)
{
}

void Engine::start()
{


	
}

void Engine::update()
{
	

	
}

void Engine::draw()
{
	
}

void Engine::end()
{

}
