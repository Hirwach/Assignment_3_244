//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include <iostream>
#include "PieceWorker.h"

PieceWorker::PieceWorker(const string& first,const string& last,const string& ssn, double w, double p): Employee(first,last,ssn) {
	wage = w;
	pieces = p;
}

void PieceWorker::setwage(double w) {
	wage = w;
}

void PieceWorker::setpieces(double p) {
	pieces = p;
}

double PieceWorker::getwage() {
	return wage;
}

double PieceWorker::getpieces() {
	return pieces;
}

double PieceWorker::earnings() {
	return getwage() * getpieces();
}