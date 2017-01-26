#ifndef WOODEN_DOOR_H
#define WOODEN_DOOR_H

#include "door.h"


class WoodenDoor: public Door {
private:


	int price; 
	string name;
	bool r;

public:

	static const int woodCost = 100;
	static const int ironCost = 20;

	WoodenDoor(string _name, int _price, bool _r);
	~WoodenDoor();

	string getName();
	void setName(string _name);
	int getPrice();
	void setPrice(int _price);
	bool getR();
	void setR(bool _r);

	void doorType();
};

#endif 