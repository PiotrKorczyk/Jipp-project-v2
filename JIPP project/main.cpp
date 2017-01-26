#include <iostream>
#include "wooden_door.h"
#include "materials.h"
#include "door_factory.h"
#include "warehouse.h"
#include <string>

using namespace std;


int main() {

	
		Warehouse *warehouse = new Warehouse();
	while (warehouse->bayBay) {
		warehouse->displayNavigation();
	}
	system("pause");
}