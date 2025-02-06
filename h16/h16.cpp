/**
 *  @author Tracy Nguyen
 *  @date April 11, 2022
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "tnguyen4561"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here

/**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 */
void get(std::istream& in, Point& p)
{
    char c;
    in >> p.x >> c >> p.y;
}

/**
 * Displays a Point in the form (x, y).
 * @param out the stream to print on
 * @param p the Point to print
 */
void print(std::ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
}

/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */
double distanceBetween(const Point& a, const Point& b)
{
    double p1 = a.y - b.y;
    double p2 = a.x - b.x;
    return sqrt(pow(p1,2) + pow(p2,2));
}

/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b)
{
    Point ans;
    ans.x = (a.x + b.x)/2;
    ans.y = (a.y + b.y)/2;
    return ans;
}

/**
 * Calculates the perimeter of the Triangle t.
 * @param t the Triangle to examine.
 * @return the perimeter.
 */
double perimeter(const Triangle& t)
{
    double a = sqrt(pow((t.p1.x - t.p2.x),2) + pow((t.p1.y - t.p2.y),2));
    double b = sqrt(pow((t.p3.x - t.p2.x),2) + pow((t.p3.y - t.p2.y),2));
    double c = sqrt(pow((t.p1.x - t.p3.x),2) + pow((t.p1.y - t.p3.y),2));
    return a + b + c;
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    cout << "Enter a point as (x, y): ";
    Point p;
    get(cin, p);
    cout << "You entered ";
    print(cout, p);
    cout << endl;

    return 0;
}