/**
 *  @author Tracy Nguyen
 *  @date February 14, 2022
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

string STUDENT = "tnguyen4561"; // Add your Canvas login name
extern string ASSIGNMENT;

// Function Prototypes
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */
int run()
{
	// Don't change anything inside this function
	printTitle();
	string letterGrade = getInput();
	double points = letterToPoints(letterGrade);
	printReport(points);

    return 0;
}

// Implement your functions here
void printTitle()
{
	cout << STUDENT << "-" << ASSIGNMENT << "-Grade Calculator" << endl;
	cout << "-----------------------------------------" << endl;
}
string getInput()
{
	cout << "Enter your letter grade: ";
	string grade;
	getline(cin, grade);
	return grade;
}
double letterToPoints(stringIn letterGrade)
{
	double point;
	if (letterGrade == "A") { point = 4.0; }
	else if (letterGrade == "A-") { point = 3.7; }
	else if (letterGrade == "B") { point = 3.0; }
	else if (letterGrade == "B+") { point = 3.3; }
	else if (letterGrade == "B-") { point = 2.7; }
	else if (letterGrade == "C") { point = 2.0; }
	else if (letterGrade == "C+") { point = 2.3; }
	else if (letterGrade == "C-") { point = 1.7; }
	else if (letterGrade == "D") { point = 1.0; }
	else if (letterGrade == "D+") { point = 1.3; }
	else if (letterGrade == "D-") { point = 0.7; }
	else if (letterGrade == "A+" || letterGrade == "F+" || letterGrade == "F-")
	{
		point = INVALID_COMBINATION;
	}
	else { point = INVALID_INPUT; }
	return point;
}
void printReport(double points)
{
	cout << "Grade value is [";
	if (points>=0)
	{
		cout << fixed << setprecision(1);
		cout << points;
	}
	else if (points == INVALID_INPUT)
	{
		cout << "Invalid input";
	}
	else if (points == INVALID_COMBINATION)
	{
		cout << "Invalid combination";
	}
	cout << "]";
}