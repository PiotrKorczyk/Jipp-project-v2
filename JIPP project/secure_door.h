#ifndef SECURE_DOOR_H
#define SECURE_DOOR_H

#include "door.h"


class SecureDoor : public Door {
private:
	int price;
	string name;
	bool r;

public:
	


	static const int woodCost = 120;
	static const int ironCost = 50;

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