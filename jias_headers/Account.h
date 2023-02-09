#ifndef ACCOUNT_H
#define ACCOUNT_H
 
#include <string>
#include "Session.h"

using namespace std;

class Account
{

public:
	//constructor
	Account();
	Account(int id);

	//getter
	int getID();

	//setter
	void setID(int id);

	//operation
	void saveHistory(Session h, int num);// store session to slot num and num will be in the range of 1 to 8.
	void savePreference(Session p);// store session to match group and type
	Session getHistory(int num); //get session by stored slot num from 1 to 8
	Session findPreference(int group, int type); //find session by math group and type


private:
	int id; //set to given id
	Session history[8]; //history, default set it all to empty
};


#endif
