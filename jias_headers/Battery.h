#ifndef BATTERY_H
#define BATTERY_H
 
#include <string>

using namespace std;

class Battery
{

public:
	//constructor
	Battery();
	Battery(string type);

	//getter
    int getPower();//return power
    const string& getPower();//return power

	//operation
	void reduce();//reduce 1% of power
	void control(int percentage); //set battery to particular percentage, check if input is vaild
	void setType(string type);//set battery type 

private:
    int power; //set to 100% as default
	string type; //set to given type or 9-volt alkaline
};


#endif
