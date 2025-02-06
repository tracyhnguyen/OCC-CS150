/**
 *  @author Tracy Nguyen
 *  @date February 20, 2022
 *  @file h06.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "tnguyen4561";  // Add your Canvas login name

// Add your function here
int sumNums(const string& nums)
{
	int sum = 0;
	int num = 0;
	char ch;
	int digit;
	for (size_t i=0, len = nums.size(); i<len; ++i)
	{
		ch = nums.at(i);
		if (isdigit(ch))
		{
			digit = ch-'0';
			num*=10;
			num+=digit;
		}
		else
		{
			sum+=num;
			num = 0;
		}
	}
	sum+=num;
	return sum;
}




/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

    return 0;
}


