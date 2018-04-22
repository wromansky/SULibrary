// payRoll.h
#ifndef PAYROLL_H
#define PAYROLL_H

#include <string>

using namespace std;

class payRoll{
	private:
		string name;
		double rate;
		double hours;

	public:
		payRoll(); // default constructor
		payRoll(std::string, double, double); // non-default constructor
		void setName(std::string);
		void setRate(double);
		void setHours(double);
		double calculatePay();
		string getName();
		double getRate();
		double getHours();
		double getPay();
		void printPayCheck();


};
#endif

