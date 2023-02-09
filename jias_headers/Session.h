#ifndef SESSION_H
#define SESSION_H

#include <string>

using namespace std;
 
class Session
{

public:
	//constructor
	Session();
	Session(Session o);//copy constructer
	Session(int group, const stirng& type);//check if group and type are in the corrent range

	//getter
	int getGroup();
	int getIntensity();
	const string& getType();

	//setter
	void set(int group, const stirng& type); //set group and type and check if it is in the vaild range
	void increaseIntensity(); //increase by one and can not increase when intensity = 8
	void decreaseIntensity(); // decrease by one and can not decrease when intensity = 0 
	void setEmpty(); // use for user design, set group and type to 0

	//operation
	bool isEmpty(); // if group or type = 0 return true
	

private:
	// default set to 1 and range will be from 1 to 2 (since the assignment metntion to choose from 20 min, 40 min)
	//user design will be store and call in by copy construtor
	int group; 
	//default set to 1, and range will be from 1 to 4 (since the assignment mention to choose from any 4 type)
	string type; 
	//default set to 0, and range will be from 0 to 8 
	int intensity

};


#endif
