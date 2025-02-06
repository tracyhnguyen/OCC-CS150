/**
    @file h34.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h34.h"

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const std::string& name, double rate)
    : name(name), rate(rate) {}

string Worker::getName() const { return name; }
double Worker::getRate() const { return rate; }

SalariedWorker::SalariedWorker(const std::string& name,double rate)
    : Worker(name, rate) {}

string SalariedWorker::payInfo(int hours) const
{
    double pay = getRate() * 40;
    ostringstream out;
    out << fixed << setprecision(2);
    out << getName() << "(Salaried, $ " << getRate()<< ") worked "
    << hours << " hours. Pay: $ " << pay;
    return out.str();
}

HourlyWorker::HourlyWorker(const std::string& name, double rate)
    : Worker(name, rate) {}

std::string HourlyWorker::payInfo(int hours) const
{
    double pay = 0;
    if (hours > 40) pay = getRate() * 40 + (hours - 40) * getRate()* 1.5;
    else pay = getRate() * hours;

    ostringstream out;
    out << fixed << setprecision(2);
    out << getName() << "(Hourly, $ " << getRate()<< ") worked "
    << hours << " hours. Pay: $ " << pay;
    return out.str();
}

/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
