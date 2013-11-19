//============================================================================
// Name        : Lab4.cpp
// Author      : Ashkan
// Version     : 1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <cstdlib>
#include <iosfwd>
#include "Physical.hpp"
using namespace std;

int main() {

	test temp;
	vital temp2;
	pressure temp3;
	urine temp4;
	temp.getinfo();
	temp2.getvital();
	temp2.checkvital();
	temp3.getpressure();
	temp3.checkpressure();
	temp4.geturine();
	temp4.checkurine();









	return 0;
}
