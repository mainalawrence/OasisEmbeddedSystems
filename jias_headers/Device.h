#ifndef DEVICE_H
#define DEVICE_H
 
#include <string>
#include <vector>
#include "Session.h"
#include "Account.h"
#include "Battery.h"
#include "EarClips.h"
#include "Power.h"

using namespace std;

class Device
{

public:
	//constructor
	Device();

	//checking
	bool isOn(); // return power are on or not
	bool isLowPower(); //check if it is low power, true if yes
	bool isEarclipProper(); //true if ear clips are connected properly


	//getter
	int getPower(); //return the percentage of the power
	int getGroup(); 
	bool isStart();
	int getConnection();

	//setter
	void setConnection(int num);
	void setBattery(Battery b); // put/ change battery

	//operation
	//battery, on and off
	void on(); //let power on if battery enough else show warning
	void off(); // let power off and if session is in progress (start = true) then use soft off method
	void putBattery(Battery b); // put battery to the decive

	//earclip
	void plugEarclips();//plug earclip to decive
	void unplugEarclips();//unplug earclip to device
	void wearEarclips();//wear ear clips
	void takeOffEarclips();//remove ear clips from ear

	//session
	//before start must check if battery enough or earclip is plug or worn properly
	void startSession(int group, const stirng& type); //input will be taken from GUI and it will make start true, and check if group and type are vaild input, set treatment
	void endSession();//set start to false and turn on soft off, and set treatment to empty
	void pauseSession(); //set start to true
	void continueSession(); //set start to true

	//record/replay
	void recordSession(int id); // record current session to selected id
	void replaySession(int num); //let current session treatment be the spot num session, check if it is empty session
	void savePreference(); //save preference match to correspond session
	void updateConnection(); //update connection if earcilp improper
	void softOff(); //graduclly lower the intensity level of the session
	const string& batterWarning(); //return warning

private:
	vector<Account> acc; //list of account
	EarClips clip;
	Power power; // default no battery
	int connection; //default 1
	Session treatment; //default empty, this is current treatment
	Session preference[8]; //2 seesion grop and 4 type, there will be 8 combo in total
	bool start;//default galse

};


#endif
