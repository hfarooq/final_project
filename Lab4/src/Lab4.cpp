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
		int choice;
		int i = 1;
		test temp;
		vital temp2;
		pressure temp3;
		urine temp4;
	    string name;
	    string annotation;

		while(i){


			cout << "Choose one of the following: " <<endl;
			cout << "1) Vital signs "<<endl;
			cout << "2) Blood pressure "<<endl;
			cout << "3) Urine test "<<endl;
			cout << "4) Add annotation "<<endl;
			cout << "5) Exit " <<endl;

			cin >> choice;

			switch(choice){

			case 1:
				temp2.getinfo();
				temp2.getvital();
				temp2.checkvital();

				temp2.appendTestToPhysicalFile();



				break;


			case 2:
				temp3.getinfo();
				temp3.getpressure();
				temp3.checkpressure();
				temp3.appendTestToPhysicalFile();
				break;


			case 3:
				temp4.getinfo();
				temp4.geturine();
				temp4.checkurine();
				temp4.appendTestToPhysicalFile();
				break;

			case 4:
				cin.ignore();
				cout << "Enter your name or ID  :";
				getline(cin, name, '\n');
				cout << "Enter your annotation  :";
				getline(cin, annotation, '\n');
				temp.addAnnotation(name, annotation);

				break;

			case 5:
				i =0;
				break;
			}

		}

		return 0;
	}






