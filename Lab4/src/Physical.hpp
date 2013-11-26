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
	string administrator, annotation;

	int	date, time;
	ofstream	PhysicalFile;
public:
	void getinfo();
	void addAnnotation(string name, string strAnnotation);
	void appendTestPhysicalToFile();
	void openPhysicalFile();
	void closePhysicalFile();
	string getAdministrator()  { return administrator;   }

	test();

};

class vital: public test{

	double temperature;
	int respiration, pulse;
public:
	vital();
	void getvital();
	void checkvital();
	void appendTestPhysicalToFile();


};

class pressure: public test{

	double sys, dias;
public:
	pressure();
	void getpressure();
	void checkpressure();
	void appendTestPhysicalToFile();

};

class urine: public test{

	double ph, sugar, protein;
public:
	urine();
	void geturine();
	void checkurine();
	void appendTestPhysicalToFile();

};


#endif /* PHYSICAL_HPP_ */
