//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include "HourlyWorker.h"

HourlyWorker::HourlyWorker(const string& first,const string& last,const string& ssn, double w, double h):Employee(first, last, ssn) {
	wage = w;
	hours = h;
}


void HourlyWorker::setwage(double w) {
	wage = w;
}

void HourlyWorker::sethours(double h) {
	hours = h;
}

double HourlyWorker::getwage() {
	return wage;
}

double HourlyWorker::gethours() {
	return hours;
}

double HourlyWorker::earnings() {
	double total;

	if (hours > 40) {
		double overtimeh = gethours() - 40;
		total = 40 * getwage() + overtimeh * getwage() * 1.5;
		return total;
	}
	else
		return gethours() * getwage();
}