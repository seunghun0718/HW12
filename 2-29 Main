#include <iostream>
using namespace std;
#include "fish.h"

int main() {
	animal* a[3];
	for (int i = 0; i < 2; i++) {
		a[i] = new fish;
	}
	fish c;
	a[2] = &c;
	((fish*)a[2])->swimSpeed();
}
