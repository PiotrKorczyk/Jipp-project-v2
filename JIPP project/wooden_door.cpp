#include "wooden_door.h"
#include <iostream>

using namespace std;

WoodenDoor::WoodenDoor(string _name, int _price, bool _r) {
	name = _name;
	price = _price;
	r = _r;
}

WoodenDoor::~WoodenDoor(){
	cout << "\nWooden door DESTRUCTOR\n";
}

string WoodenDoor::getName() {
	return name;
}


void WoodenDoor::setName( string _name) {
	name = _name;
}

int WoodenDoor::getPrice() {
	return price;
}


void WoodenDoor::setPrice(int _price) {
	price = _price;
}

bool WoodenDoor::getR() {
	return r;
}


void WoodenDoor::setR(bool _r) {
	r = _r;
}

void WoodenDoor::doorType() {

	cout << "Wooden door type: " << name << " price: " << price << "$ right: " << r << endl;
}