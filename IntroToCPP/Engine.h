#pragma once
#include "Entity.h"


class Engine
{
public:
	Engine();
	void run();

	static bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationShouldClose(bool value) { m_applicationShouldClose = value; }

private:
	void start();
	void update();
	void draw();
	void end();

	

private:
	static bool m_applicationShouldClose;
	Entity m_entity[50];
	int m_entityCount;

};