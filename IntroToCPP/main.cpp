#include <iostream>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int test = 10;
int numbers[] = { 1, 2, 3 };
int numbers2[10] = { 1,2,3 };
int numbers2D[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

int main()
{
	//std::cout << "Cade Gordon" << std::endl;
	//std::cout << "18";
	int number = 'f';
	int health = -100;
	int damage = 10;
	bool isAlive = health;
	bool test2 = 0;
	int age = 12;

	/*if (health == 0)
	{
		isAlive = false;
	}
	else if (health == 100)
	{
		damage += 50;
	}
	else if (health == 50)
	{
		std::cout << "Danger! Health Low";
	}

	switch (health)
	{
	case 0:
		isAlive = false;
		break;
	case 50:
		std::cout << "Danger! Health Low";
		break;
	case 100:
		damage += 50;
		break;

	}*/
	
	/*for (int i = 0; i < 3; i++)
	{
		std::cout << numbers[i] << std::endl;
	}*/

	char firstName[] = "Cade";
	char lastName[35] = "";
	char fullName[64] = "";
	
	
	std::cout << firstName << std::endl;
	std::cin >> lastName;

	strcat_s(fullName, firstName);
	strcat_s(fullName, lastName);
	strcpy_s(firstName, lastName);

	std::cout << fullName;

	

	std::cout << firstName << " " << lastName;

	/*std::cin >> age;
	std::cout << "Your age is: " << age;*/
	return 0;
}