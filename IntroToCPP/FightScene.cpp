#include "FightScene.h"
#include "Engine.h"




void FightScene::start()
{
	Entity scoobyDoo = Entity('S', 50, 75, 100);
	Entity batMan = Entity('B', 55, 200000, 70);
	Entity unclePhil = Entity('U', 1, 0, 69420);

	m_entities[0] = scoobyDoo;
	m_entities[1] = batMan;
	m_entities[2] = unclePhil;
	m_entityCount = 3;

	Entity entityPtrs[5];
	Entity* entities = new Entity[5];
}
