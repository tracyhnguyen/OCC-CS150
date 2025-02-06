/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h27.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "h27.h"

string STUDENT = "tnguyen4561";  // Add your Canvas login name
extern string ASSIGNMENT;

// Implement your member functions here
istream& Time::read(istream& in)
{
    int h, m;
    char c;
    in >> h >> c >> m;
    if (h>=24 || m>59) in.setstate(ios::failbit);
    hours = h;
    minutes = m;
    return in;
}

ostream& Time::print(ostream& out)
{
    if (hours == 00) hours = 12;
    out << hours << ":";
    if (minutes < 10) out << "0";
    out << minutes;
    return out;
}

Time Time::sum(Time t)
{
    int minutesAfter = (minutes + t.minutes)%60;
    int hoursAfter = (hours + t.hours)%12;
    if (minutes + t.minutes >= 60)
    {
        hoursAfter = (hoursAfter + 1)%12; // if minutes more than 60, increase hour
    }
    return Time{hoursAfter, minutesAfter};
}

Time Time::difference(Time t)
{
    int minutesBefore = (minutes - t.minutes + 60)%60;
    int hoursBefore = (hours - t.hours + 12)%12;
    if (minutes < t.minutes)
    {
        hoursBefore = (hoursBefore - 1 + 12)%12;
    }
    return Time{hoursBefore, minutesBefore};
}


// Predefined functions for this assignment
int run()
{
    printHeading();

    Time startTime;
    Time duration;

    // Input section
    cout << "    Time: ";
    if (! startTime.read(cin)) { return die(); }
    cout << "    Duration: ";
    if (! duration.read(cin)) { return die(); }

    // Processing section
    Time after = startTime.sum(duration);
    Time before = startTime.difference(duration);

    // Output section
    cout << endl;
    duration.print(cout) << " hours after, and before, ";
    startTime.print(cout) << " is [";
    after.print(cout) << ", ";
    before.print(cout) << "]" << endl;

    return 0;
}

void printHeading()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": Time and Again" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Give me a time (such as 3:57) and a duration\n"
        << "(such as 1:05), and I'll tell you the sum\n"
        << "(that is, the time that follows the given time\n"
        << "by the given duration), and difference (the time that\n"
        << "precedes the given time by that duration)." << endl;
    cout << endl;
}

int die()
{
    cout << "[Failed Input]" << endl;
    cout.flush();
    return -1;
}
