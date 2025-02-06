/**
    @file h33.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h33.h"
///////// Add your code here ///////////////

Circle::Circle(double radius, double x, double y)
: Point(x, y), m_radius(radius) {}
double Circle::getRadius() const { return m_radius; }
double Circle::getArea() const { return PI * m_radius * m_radius; }
double Circle::getCircumference() const { return 2 * PI * m_radius; }
std::string Circle::toString(int decimals) const
{
ostringstream out;
out << fixed << setprecision(decimals);
out << "Circle(radius=" << m_radius << ", center=" << Point::toString(decimals) << ")";
return out.str();
}

Cylinder::Cylinder(double height, double radius, double x, double y)
: Circle(radius, x, y), m_height(height) {}
double Cylinder::getHeight() const { return m_height; }
double Cylinder::getVolume() const { return Circle::getArea() * m_height; }
double Cylinder::getArea() const
{
return 2 * PI * getRadius() * m_height + 2 * PI * getRadius() * getRadius();
}
std::string Cylinder::toString(int decimals) const
{
ostringstream out;
out << fixed << setprecision(decimals);
out << "Cylinder(height=" << m_height << ", base=" << Circle::toString(decimals) << ")";
return out.str();
}


//////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
