#pragma once
#include "ani.h"
using namespace std;

class fish : public animal {
public:
	fish() { 
		speed = 3;
	}
	int speed;
	void swimSpeed() {
		cout << "Speed is " << speed << endl;
	}
};
