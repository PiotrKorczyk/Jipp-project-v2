#include "heavy_door.h"
#include <iostream>

using namespace std;

HeavyDoor::HeavyDoor(string _name, int _price, bool _r) {
	name = _name;
	price = _price;
	r = _r;
}

HeavyDoor::~HeavyDoor() {
	cout << "\nHeavy door DESTRUCTOR\n";
}

string HeavyDoor::getName() {
	return name;
}


void HeavyDoor::setName(string _name) {
	name = _name;
}

int HeavyDoor::getPrice() {
	return price;
}


void HeavyDoor::setPrice(int _price) {
	price = _price;
}

bool HeavyDoor::getR() {
	return r;
}


void HeavyDoor::setR(bool _r) {
	r = _r;
}

void HeavyDoor::doorType() {

	cout << "Heavy door type: " << name << " price: " << price << "$ right: " << r << endl;
}