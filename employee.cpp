/*
Hezekia Njoroge
BSE-03-0128/2025
A program that creates an Employee object, takes user input for personal data,
and displays the entered values using a method.
*/

#include <iostream>
using namespace std;

class Employee {
public:
    string name, occupation;
    int identificationNumber;

    // Method to display the employee details
    void display() {
        cout << "My Name is: " << name << endl;
        cout << "I work as a/an: " << occupation << endl;
        cout << "My Identification Number is: " << identificationNumber << endl;
    }
};

int main() {
    Employee e1;

    // Prompting user and assigning values to the object
    cout << "Enter your Name: ";
    cin >> e1.name;

    cout << "Enter your Occupation: ";
    cin >> e1.occupation;

    cout << "Enter your Identification Number: ";
    cin >> e1.identificationNumber;

    // Display the entered values using the display method
    e1.display();

    return 0;
}