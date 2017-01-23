#ifndef MATERIALS_H
#define MATERIALS_H

class Materials {
private:
	int amountOfWood = 1000;
	int amountOfIron = 1000;

public:
	Materials();
	~Materials();
	void materialsInfo();

	int getAmountOfWood();
	void setAmountOfWood(int _value);
	int getAmountOfIron();
	void setAmountOfIron(int _value);

};


#endif

