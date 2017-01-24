#ifndef DOOR_FACTORY_H
#define DOOR_FACTORY_H

#include "door.h"
#include "wooden_door.h"
#include "heavy_door.h"
#include "secure_door.h"
#include "materials.h"
#include <iostream>
#include <string>

using namespace std;

class DoorFactory: public Door {

private:
	static int amountOfDoors;
	const int woodDoorWoodCost = 100;
	const int woodDoorIronCost = 20;
	const int heavyDoorWoodCost = 50;
	const int heavyDoorIronCost = 60;
	const int SecureDoorWoodCost = 30;
	const int SecureDoorIronCost = 120;


public:
	DoorFactory();
	~DoorFactory();
	Door createWoodenDoor();
	Door createHeavyDoor();
	Door createSecureDoor();
	

	
	

};
#endif 
