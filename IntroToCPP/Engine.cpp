#include "Engine.h"

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
	Entity scoobyDoo = Entity('R', 50, 75, 100);
	Entity batMan = Entity('B', 55, 200000, 70);
	Entity unclePhil = Entity('U', 1, 0, 69420);

	m_entites[0] = scoobyDoo;
	m_entites[1] = batMan;
	m_entites[2] = unclePhil;

	m_currentFighter1 = m_entites[0];
	m_currentFighter2 = m_entites[1];
	m_currentFighterIndex = 2;
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
