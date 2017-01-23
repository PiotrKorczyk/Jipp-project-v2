#ifndef DOOR_H
#define DOOR_H

#include<string>

using namespace std;


class Door {
protected:
	 int woodCost;
	 int ironCost;

	int price;
	string name;
	bool r;				// left door or  right door
public:
	virtual void doorType();
	Door();
	~Door();
};



#endif
