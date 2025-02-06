/**
 *  @author Tracy Nguyen
 *  @date February 20, 2022
 *  @file h05.cpp
 */
#include <string>
using namespace std;

string STUDENT = "tnguyen4561";  // Add your Canvas login name

// Write your function here
string toFrenchGender(const string& country)
{
    string result = "who knows?";
    string prefix;
    string islands = "iles";
    int len = country.size();
    string last = country.substr(len-2);
    
    // Plural? set prefix to "les " (Note space)
    // if (country.substr(0,5) == islands || last == "es"
    //     || last == "is" || last == "os" || last == "as")
    // {
    //     prefix = "les ";
    // }
    
    // Belize Cambodge Mexique Mozambique Zaire Zimbabwe (all le)
    if (country == "Belize" || country == "Cambodge"
        || country == "Honduras" || country == "Mexique"
        || country == "Mozambique" || country == "Zaire"
        || country == "Zimbabwe")
    {
        prefix = "le ";
    }
    // Israel, Madagascar, Sri Lanka, Singapore, Monaco, Cuba and Cyprus have no prefix
    else if (country == "Israel" || country == "Madagascar"
        || country == "Sri Lanka"  || country == "Singapore"
        || country == "Monaco" || country == "Cuba"
        || country == "Cyprus")
    {
        return country;
    }
    // Plural? set prefix to "les " (Note space)
    else if (country.substr(0,4) == islands || last == "es"
        || last == "is" || last == "os" || last == "as")
    {
        prefix = "les ";
    }
    // Starts with a vowel? prefix l' (no space)
    else if (tolower(country.front()) == 'a' || tolower(country.front()) == 'e'
        || tolower(country.front()) == 'i' || tolower(country.front()) == 'o'
        || tolower(country.front()) == 'u')
    {
        prefix = "l\'";
    }
    // Country end in letter e or o? Feminine prefix->la (space)
    else if (country.back() == 'e' || country.back() == 'o')
    {
        prefix = "la ";
    }
    // Otherwise? Masculine prefix->le (space)
    else
    {
        prefix = "le ";
    }
    result = prefix + country;
    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    // You may add any code you like
    // It will be displayed with make run
    return 0;
}
