#ifndef MATERIALS_H
#define MATERIALS_H



class Materials {


private:
	int amountOfWood;
	int amountOfIron;

public:
	Materials();
	Materials(int _amountOfWood, int _amountOfIron);
	~Materials();
	void materialsInfo();


	int getAmountOfWood();
	void setAmountOfWood(int _value);
	int getAmountOfIron();
	void setAmountOfIron(int _value);

};


#endif

