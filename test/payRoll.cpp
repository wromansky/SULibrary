#include "payRoll.h"
#include <string>
#include <iostream>
using namespace std;

// Default constructor creates an employee
// with no name and 0 payrate, hours, and
// pay
payRoll::payRoll()
{
	name =  " ";
	rate = 0.0;
	hours = 0.0;
}
// Non default constructor creates and employee
// by bringing in the name, payrate, and hours
payRoll::payRoll(std::string n, double r, double h)
{
	name = n;
	rate = r;
	hours = h;
}

// Brings in a string to be set to the name
void payRoll::setName(std::string n)
{
	name = n;
}

// Brings in a double to set to rate
void payRoll::setRate(double r)
{
	rate = r;
}

// Brings in a double to be set to hours
void payRoll::setHours(double h)
{
	hours = h;
}

// Sets pay to rate multiplied by hours
// then returns it
double payRoll::calculatePay()const
{
	return rate * hours;
}

// Returns the name
std::string payRoll::getName()
{
	return name;
}

// Returns the payrate
double payRoll::getRate()
{
	return rate;
}

// Returns the hours
double payRoll::getHours()
{
	return hours;
}

// Returns the total pay
double payRoll::getPay()
{
	return rate * hours;
}

void payRoll::printPayCheck()const
{
	double pay = calculatePay();
	cout << name << "   Rate: " << rate << "  Hours Worked: " << hours << "  Gross Pay: $" << pay << endl << endl;

}
