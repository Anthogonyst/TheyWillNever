#include<iostream>
#include "Gas Station.h"

using namespace std;

int main() {
	Gasoline pump_full;
	Gasoline pump_self(3.05);

	pump_full.pump(400);
	pump_full.pump(100);
	pump_self.pump();

	return 0;

}