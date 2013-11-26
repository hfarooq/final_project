/*
 * Physical.hpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Ashkan
 */

#ifndef PHYSICAL_HPP_
#define PHYSICAL_HPP_

using namespace std;

class test{
protected:
	string administrator;
	int	date, time;
	ofstream	PatientFile;
public:
	string getAdministrator()  { return administrator;   }
	test();
	void getinfo();
	void addAnnotation(string name, string annotation);
	void appendToPatientFile(string mystring);
	void openPatientFile();
	void closePatientFile();





};

class vital: public test{

	double temperature;
	int respiration, pulse;
public:
	vital();
	void getvital();
	void checkvital();
	void appendTestToPhysicalFile();


};

class pressure: public test{

	double sys, dias;
public:
	pressure();
	void getpressure();
	void checkpressure();
	void appendTestToPhysicalFile();

};

class urine: public test{

	double ph, sugar, protein;
public:
	urine();
	void geturine();
	void checkurine();
	void appendTestToPhysicalFile();

};


#endif /* PHYSICAL_HPP_ */
