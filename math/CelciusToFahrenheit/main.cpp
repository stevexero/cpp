#include <iostream>

using namespace std;

// Convert Celsius to Fahrenheit
// The formula to convert from Celsius to Fahrenheit is the temperature in Celsius times 9/5, plus 32.

// fahrenheitValue = (celsiusValue * 9 / 5) + 32

// You are given a variable celsius representing a temperature in Celsius.
// Use the variable fahrenheit already defined and assign it the Fahrenheit temperature
// equivalent to the given Celsius temperature.
// Use the formula mentioned above to help convert the Celsius temperature to Fahrenheit.

// convertCtoF(0) should return a number
// convertCtoF(-30) should return a value of -22
// convertCtoF(-10) should return a value of 14
// convertCtoF(0) should return a value of 32
// convertCtoF(20) should return a value of 68
// convertCtoF(30) should return a value of 86

int main() {
    double fahrenheit;
    double celsius;

    cin >> celsius;

    fahrenheit = (celsius * 9.0) / 5.0 + 32.0;

    cout << fahrenheit << endl;
}