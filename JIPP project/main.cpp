#include <iostream>
#include "wooden_door.h"
#include <string>

using namespace std;


int main() {

WoodenDoor d1("Normal wood", 50, 1);

d1.doorType();
d1.setName("Normal wood v2");

d1.setPrice(100);

d1.doorType();
d1.~WoodenDoor();

system("pause");
}