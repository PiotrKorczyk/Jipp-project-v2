#include "secure_door.h"
#include <iostream>

using namespace std;

SecureDoor::SecureDoor(string _name, int _price, bool _r) {
	name = _name;
	price = _price;
	r = _r;
}

SecureDoor::~SecureDoor() {
	cout << "\nSecure door DESTRUCTOR\n";
}

string SecureDoor::getName() {
	return name;
}


void SecureDoor::setName(string _name) {
	name = _name;
}

int SecureDoor::getPrice() {
	return price;
}


void SecureDoor::setPrice(int _price) {
	price = _price;
}

bool SecureDoor::getR() {
	return r;
}


void SecureDoor::setR(bool _r) {
	r = _r;
}

void SecureDoor::doorType() {

	cout << "Secure door type: " << name << " price: " << price << "$ right: " << r << endl;
}