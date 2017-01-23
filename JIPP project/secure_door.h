#ifndef SECURE_DOOR_H
#define SECURE_DOOR_H

#include "door.h"


class SecureDoor : public Door {
private:

	const int woodCost = 120;
	const int ironCost = 30;

	int price;
	string name;
	bool r;

public:

	SecureDoor(string _name, int _price, bool _r);
	~SecureDoor();

	string getName();
	void setName(string _name);
	int getPrice();
	void setPrice(int _price);
	bool getR();
	void setR(bool _r);

	void doorType();
};

#endif 