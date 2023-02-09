#ifndef POWER_H
#define POWER_H

#include <string>
#include "Battery.h"
 
using namespace std;

class Power
{

public:
	//constructor
	Power();

	//getter
	bool isOn(); //return on
	int battery();//return battery life out of 100

	//setter
	void on();//set on true
	void off();//set on false
	void reduce();// remove 1% of power from battery

	//operation
	void put(Battery power); //put on new Battery
	bool checkBatteryType(); // check if battery type is same as USEDTYPE

private:
	Battery battery; //
	bool on; // default false
	const string USEDTYPE; // constant and it is 9-volt alkaline 
}; 


#endif
