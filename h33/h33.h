/*
 *  h33.h
 *  @author your name goes here
 *  @version your section and day
 *  Point->Circle->Cylinder
 */

#ifndef H33_H_
#define H33_H_

#include "point.h"
#include <cmath>
#include <string>

// Use this for PI
const double PI = std::acos(-1.0);

//////// Put your class definitions here /////////////////////
// Put Circle first, then Cylinder
class Circle : public Point
{
public:
Circle(double radius, double x, double y);
double getRadius() const;
virtual double getArea() const;
double getCircumference() const;
std::string toString(int decimals = 2) const override;
private:
double m_radius = 0;
};

class Cylinder : Circle
{
public:
Cylinder(double height, double radius, double x, double y);
double getHeight() const;
double getVolume() const;
double getArea() const override;
std::string toString(int decimals = 2) const override;


private:
double m_height = 0;
};

#endif
