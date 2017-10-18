/** Jennifer Byrne
    20/09/2017
    Lab 1
    Celcuis to fahrenheit coinversion */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>

/** Enables cout, cin and endl */
using namespace std;

/** Main function */
int main()
{
    /** Initialising variables */
    double fah, cel;

    /** Specifies the nu,ber of decimal points to ce displayed in answer */
    cout << fixed;
    cout << setprecision(2);

    /** Displaying text on console */
    cout << "Enter celcuis : ";
    /** Reading in value for cel */
    cin >> cel;

    /** Equation for conversion */
    fah = 9.0/5.0 * cel + 32;

    /** Display text and fahrenheit on console */
    cout << "Temperature in Fahrenheit : " << fah << endl;

    /** End main function */
    return 0;
}
