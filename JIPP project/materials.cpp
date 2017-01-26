#include "materials.h"
#include <iostream>

using namespace std;

Materials::Materials() {
	amountOfWood = 1000;
	amountOfIron = 1000;
}

Materials::Materials(int _amountOfWood, int _amountOfIron){
	amountOfWood = _amountOfWood;
	amountOfIron = _amountOfIron;
}

Materials::~Materials() {

	cout << "\nMaterials destructor\n";
}

void Materials::materialsInfo() {
	cout << "Wood: " << amountOfWood << " Iron: " << amountOfIron << endl;
}

int Materials::getAmountOfWood() {
	return amountOfWood;
}

void Materials::setAmountOfWood(int _value) {
	amountOfWood = _value;
}

int Materials::getAmountOfIron() {
	return amountOfIron;
}

void Materials::setAmountOfIron(int _value) {
	amountOfIron = _value;
}
  


