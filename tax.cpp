/*
Hezekia Njoroge
BSE-03-0128/2025
A SIMPLE CPP PROGRAM THAT CALCULATES TAX AND GROSS PAY TO FIND NET PAY
*/

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate gross pay
double g(double hpw, double hw) {
    return hpw * hw;
}

// Function to calculate tax payable
double t(double gross) {
    return gross * 0.25;
}

// Function to calculate net pay
double n(double gross, double tax) {
    return gross - tax;
}

int main() {
    double hpw, hw, gross, tax, net;

    // Input hourly wage and hours per week
    cout << "ENTER YOUR HOURLY WAGE: ";
    cin >> hw;
    cout << "ENTER YOUR HOURS PER WEEK/ FOR THE WEEK: ";
    cin >> hpw;

    // Calculate gross pay
    gross = g(hpw, hw);
    cout << "YOUR GROSS PAY IS: " << gross << endl;

    // Calculate tax payable
    tax = t(gross);
    cout << "YOUR TAX PAYABLE IS: " << tax << endl;

    // Calculate net pay
    net = n(gross, tax);
    cout << "YOUR NET PAY IS: " << net << endl;

    return 0;
}