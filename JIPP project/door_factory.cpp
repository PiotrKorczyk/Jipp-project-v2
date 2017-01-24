#include "door_factory.h"
#include "materials.h"

Materials *materials = new Materials();

DoorFactory::DoorFactory(){
	amountOfDoors = 0;
}
DoorFactory::~DoorFactory() {}

Door DoorFactory::createWoodenDoor() {
	
	if ((materials->getAmountOfWood() < woodDoorWoodCost)
		|| (materials->getAmountOfIron()< woodDoorIronCost)){
		cout << "Not enought materials!" << endl;
	}
	else {

		string _name;
		int _price;
		bool _r;
		cout << "\nWOODEN DOOR\nDoor name: ";
		cin >> _name;
		cout << "\nDoor price ";
		cin >> _price;
		cout << "\nLeft door - 0  Right - 1: ";
		cin >> _r;
		return WoodenDoor(_name, _price, _r);
	}
}

Door DoorFactory::createHeavyDoor() {

	string _name;
	int _price;
	bool _r;
	cout << "\nHEAVY DOOR\nDoor name: ";
	cin >> _name;
	cout << "\nDoor price ";
	cin >> _price;
	cout << "\nLeft door - 0  Right - 1: ";
	cin >> _r;
	return HeavyDoor(_name, _price, _r);
}

Door DoorFactory::createSecureDoor() {
	
	string _name;
	int _price;
	bool _r;
	cout << "\nSECURE DOOR\nDoor name: ";
	cin >> _name;
	cout << "\nDoor price ";
	cin >> _price;
	cout << "\nLeft door - 0  Right - 1: ";
	cin >> _r;
	return SecureDoor(_name, _price, _r);
}

