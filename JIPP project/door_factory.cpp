#include "door_factory.h"
#include "materials.h"

Materials *materials = new Materials(150,1000);



DoorFactory::DoorFactory(){
}

DoorFactory::~DoorFactory() {}



void DoorFactory::displayMaterials() {
	cout << "Dostepne materialy: \n";
	cout << materials->getAmountOfWood() << " drewna\n";
	cout << materials->getAmountOfIron() << " zelaza\n";
}



bool DoorFactory::enoughtMaterials(int _choosenDoor) {

	switch (_choosenDoor) {

	case 1:
	{
		if ((materials->getAmountOfWood() < WoodenDoor::woodCost)
			|| (materials->getAmountOfIron() < WoodenDoor::ironCost)) {
			return 0;
		}
		
	}
	case 2:
	{
		if ((materials->getAmountOfWood() < HeavyDoor::woodCost)
			|| (materials->getAmountOfIron() < HeavyDoor::ironCost)) {
			return 0;
		}
	
	}
	case 3:
	{
		if ((materials->getAmountOfWood() < SecureDoor::woodCost)
			|| (materials->getAmountOfIron() < SecureDoor::ironCost)) {
			return 0;
		}
		
	}
	default:
		return 1;
		
	}
}



Door *DoorFactory::createWoodenDoor() {


	string _name;
	int _price;
	bool _r;
	cout << "\nWOODEN DOOR\nDoor name: ";
	cin >> _name;
	cout << "\nDoor price ";
	cin >> _price;
	cout << "\nLeft door - 0  Right - 1: ";
	cin >> _r;

	materials->setAmountOfWood((materials->getAmountOfWood() - WoodenDoor::woodCost));
	materials->setAmountOfIron((materials->getAmountOfIron() - WoodenDoor::ironCost));
	return new  WoodenDoor(_name, _price, _r);
}

Door *DoorFactory::createHeavyDoor() {

	
	string _name;
	int _price;
	bool _r;
	cout << "\nHEAVY DOOR\nDoor name: ";
	cin >> _name;
	cout << "\nDoor price ";
	cin >> _price;
	cout << "\nLeft door - 0  Right - 1: ";
	cin >> _r;

	materials->setAmountOfWood(materials->getAmountOfWood() - HeavyDoor::woodCost);
	materials->setAmountOfIron(materials->getAmountOfIron() - HeavyDoor::ironCost);


	return new  HeavyDoor(_name, _price, _r);
}

Door *DoorFactory::createSecureDoor() {
	
	string _name;
	int _price;
	bool _r;
	cout << "\nSECURE DOOR\nDoor name: ";
	cin >> _name;
	cout << "\nDoor price ";
	cin >> _price;
	cout << "\nLeft door - 0  Right - 1: ";
	cin >> _r;

	materials->setAmountOfWood(materials->getAmountOfWood() - SecureDoor::woodCost);
	materials->setAmountOfIron(materials->getAmountOfIron() - SecureDoor::ironCost);


	return new SecureDoor(_name, _price, _r);
}

