//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
#pragma once
#include "Employee.h"
#ifndef PIECEWORKER_H
#define PIECEWORKER_H

class PieceWorker: public Employee {

	PieceWorker(const string&,const string&, const string&,double=0.0, double=0.0);
	void setwage(double);
	void setpieces(double);
	double getwage();
	double getpieces();
	double earnings() ;

private:
	double wage; // determines the wage earned
	double pieces; //stores the number of pieces made

};
#endif