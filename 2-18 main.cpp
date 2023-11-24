#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
#include "Motor.h"

int main() {
	Car* newSUV = new SUV();

	newSUV->klaxon(3);
}
