#include "StartScene.h"
#include "Engine.h"
#include <iostream>

void StartScene::draw()
{
	std::cout << "Welcome to the simualtion what would you like to do?" << std::endl;
	std::cout << "1.Start Simulation" << std::endl;
	std::cout << "2.Close Application" << std::endl;

	
}

void StartScene::update()
{
	int playerChoice;

	std::cin >> playerChoice;

	if (playerChoice == 1)
	{

	}
	else if (playerChoice == 2)
	{
		Engine::setApplicationShouldClose(true);
	}
}
