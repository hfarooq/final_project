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
	string administrator, annotation;
	int date, time;
public:
	void getinfo();
	test();

};

class vital: public test{

	double temperature;
	int respiration, pulse;
public:
	void getvital();
	void checkvital();


};

class pressure: public test{

	double sys, dias;
public:
	void getpressure();
	void checkpressure();

};

class urine: public test{

	double ph, sugar, protein;
public:
	void geturine();
	void checkurine();

};


#endif /* PHYSICAL_HPP_ */
