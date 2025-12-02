// Write a program that reads height in inches and displays in feet and inches.

#include <iostream>
using namespace std;

int main() {
    int inches;
    cout << "Enter height in inches: ";
    cin >> inches;

    int feet = inches / 12;
    int remaining = inches % 12;

    cout << "Height = " << feet << " feet " << remaining << " inches";
    return 0;
}
