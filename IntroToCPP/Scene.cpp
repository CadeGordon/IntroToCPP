#include "Scene.h"
#include <iostream>

Scene::Scene()
{
	m_actorCount = 0;
	m_actors = ActorArray();
}

Scene::~Scene()
{
	delete[] m_actors;
}

void Scene::addActor(Actor* actor)
{
	m_actors.addActor(actor);
}

bool Scene::getStarted()
{
	return m_started;
}


bool Scene::removeActor(Actor* actor)
{
	m_actors.removeActor(actor);
}

void Scene::start()
{
	m_started = true;
}

void Scene::update()
{
	for (int i = 0; i < m_actors.getLength; i++)
	{
		if (!m_actors.getActor(i)->
		{
			m_actors[i]->start();
		}

		m_actors[i]->update();
	}
}

void Scene::draw()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors[i]->draw();
	}
}

void Scene::end()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors[i]->end();
	}
}
