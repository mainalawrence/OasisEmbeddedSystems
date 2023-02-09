#ifndef EARCLIPS_H
#define EARCLIPS_H

#include <string>
 
using namespace std;

class EarClips
{

public:
	//constructor
	EarClips();

	//getter
	bool getWear();
	bool getPlug();

	//setter
	void wore(); //set wear to true
	void improperWear(); //set wear to false
	void plugged(); //set plug to true
	void unplug();//set plug to false
	

private:
	bool wear;//default false
	bool plug;//default false
};


#endif
