#include "warehouse.h"
#include <vector>

Warehouse::Warehouse() {
	bayBay = 1;
};

Warehouse::~Warehouse() {
	cout << "Warehouse destructor" << endl; 
};

DoorFactory *factory = new DoorFactory();


vector<Door*> Warehouse::vec;
 

int Warehouse::displayDoorsOptions() {
	int _opcion;
	cout << "Jakie drzwi chcesz dodac?" << endl;
	cout << "1 - Drewniane drzwi" << endl;
	cout << "2 - Ciezkie drzwi" << endl;
	cout << "3 - Drzwi bezpiecznenstwa(anty zombie)" << endl;
	cout << "opcja: " << endl;
	cin >> _opcion;
	return _opcion;
}



void Warehouse::displayDoors() {

	cout << "Dostepne drzwi:\n";
	for (size_t i = 0; i < (Warehouse::vec.size()); i++) {
		Warehouse::vec[i]->doorType();
	}
}



void Warehouse::displayNavigation() {
	int _opcion;
	int _globalOption;
	cout << "Co chcesz zrobic?\n" << endl;
	cout << "1 - dodaj drzwi" << endl;
	cout << "2 - wyswietl zasoby materilow" << endl;
	cout << "3 - wyswietl drzwi na stanie" << endl;
	cout << "4 - EXIT" << endl;
	cout << "opcja: " << endl;
	cin >> _opcion;
	
	switch (_opcion) {
	case 1:
		_globalOption = displayDoorsOptions();
		if (factory->enoughtMaterials(_globalOption)) {
			if (_globalOption == 1) {
				Warehouse::vec.push_back((factory->createWoodenDoor()));
			}
			if (_globalOption == 2) {
				Warehouse::vec.push_back((factory->createHeavyDoor()));
			}
			if (_globalOption == 3) {
				Warehouse::vec.push_back((factory->createSecureDoor()));
			}
		}
		else
			cout << "\nBrak materialow!!\n";
		break;

	case 2:
		factory->displayMaterials();
		break;

	case 3:
		displayDoors();
		break;

	case 4:
		bayBay = 0;
		Warehouse::~Warehouse();
		break;

	}
}


