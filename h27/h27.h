/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h27.h
 */
#ifndef H27_H
#define H27_H

/** Exits the program and prints [Input failed]. */
int die();

/** Prints the heading for this assignment */
void printHeading();

// Add your user-defined type definition here
struct Time
{
    int hours;
    int minutes;

    istream& read(istream& in);
    ostream& print(ostream& out);
    Time sum(Time t);
    Time difference(Time t);
};


#endif
