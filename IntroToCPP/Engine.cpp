#include "Engine.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;
	m_currentFighterIndex = 0;
	

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

void Engine::start()
{
	Entity scoobyDoo = Entity('S', 50, 75, 100);
	Entity batMan = Entity('B', 55, 200000, 70);
	Entity unclePhil = Entity('U', 1, 0, 69420);

	m_entites[0] = scoobyDoo;
	m_entites[1] = batMan;
	m_entites[2] = unclePhil;
	m_entityCount = 3;

	m_currentFighter1 = &m_entites[0];
	m_currentFighter2 = &m_entites[1];
	m_currentFighterIndex = 2;
}

void Engine::update()
{
	if (m_currentFighter1->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter1 = &m_entites[m_currentFighterIndex];
		m_currentFighterIndex++;
	}
	if (m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter2 = &m_entites[m_currentFighterIndex];
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
