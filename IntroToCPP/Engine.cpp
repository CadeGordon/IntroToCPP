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
	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void Engine::update()
{
	if (m_currentFighter1->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter1 = &m_entities[m_currentFighterIndex];
		m_currentFighterIndex++;
	}
	if (m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter2 = &m_entities[m_currentFighterIndex];
		m_currentFighterIndex++;
	}

	if ((m_currentFighter1->getHealth() || m_currentFighter2->getHealth() <= 0) && m_currentFighterIndex >= m_entityCount)
	{
		m_applicationShouldClose = true;
			return;
	}
		
	m_currentFighter1->attack(m_currentFighter2);
	m_currentFighter2->attack(m_currentFighter1);

	
}

void Engine::draw()
{
	m_currentFighter1->printStats();
	m_currentFighter2->printStats();
	system("pause");
	system("cls");
}

void Engine::end()
{

}
