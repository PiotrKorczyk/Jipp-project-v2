#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <string>
#include <iostream>
#include <vector>
#include "door.h"
#include "door_factory.h"

using namespace std;


class Warehouse{
	

public:
	bool bayBay;
	static vector<Door*> vec ;

	Warehouse();
	~Warehouse();
	void displayNavigation();
	int displayDoorsOptions();
	void displayDoors();
};

#endif 








/*
polecenia tworzenai drzwi ->>> kontener

obs³uga tworzenai drzwi, sprawdzanei czy mozna ,
wyswietlanie materia³ow, petla po wyswietlaniu drzwi.
max 8 drzwi w warehouse.
*/