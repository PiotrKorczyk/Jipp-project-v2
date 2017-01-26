#ifndef DOOR_FACTORY_H
#define DOOR_FACTORY_H

#include "door.h"
#include "wooden_door.h"
#include "heavy_door.h"
#include "secure_door.h"
#include "materials.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DoorFactory: public Door {

protected:
	
public:
	DoorFactory();
	~DoorFactory();
	Door *createWoodenDoor();
	Door *createHeavyDoor();
	Door *createSecureDoor();
	bool enoughtMaterials(int _choosenDoor);
	void displayMaterials();
	
};
#endif 
