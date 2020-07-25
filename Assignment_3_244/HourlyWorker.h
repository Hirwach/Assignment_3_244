//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
#pragma once
#include "Employee.h"

#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

class HourlyWorker:public Employee {
public:
	HourlyWorker(const string&,const string&,const string&, double=0.0, double=0.0);
	void setwage(double);
	void sethours(double);
	double getwage();
	double gethours();
	double earnings();

private:
	double wage; // determines the wage earned
	double hours; //stores the number of pieces made





};
#endif