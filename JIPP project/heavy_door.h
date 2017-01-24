#ifndef HEAVY_DOOR_H
#define HEAVY_DOOR_H

#include "door.h"


class HeavyDoor : public Door {
private:

	int price;
	string name;
	bool r;

public:

	HeavyDoor(string _name, int _price, bool _r);
	~HeavyDoor();

	string getName();
	void setName(string _name);
	int getPrice();
	void setPrice(int _price);
	bool getR();
	void setR(bool _r);

	void doorType();
};

#endif 