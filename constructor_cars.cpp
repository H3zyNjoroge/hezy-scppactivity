/*define a class named Car
pdefine data members: brand, model, price(float) and mileage (int)
	constructor to initialize.
	define public member called display that displays;
	define another public member function named drive that accepts an integer parameter representing distance driven.should increase the mileage by amount and display the updated mileage(.
	main function {
		brand toyota
		model corolla
		price 20000
		mileage 5000
	}
	use display function to show cars details.
	simulate driving the car for 150 and 300 miles using drive function and display*/
	
#include <iostream>
#include <string>
using namespace std;

// Define the Car class
class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    // Constructor to initialize data members
    Car(string b, string m, float p, int mil) : brand(b), model(m), price(p), mileage(mil) {}

    // Member function to display car details
    void display() {
        cout << "Car Details:\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles\n";
    }

    // Member function to simulate driving the car
    void drive(int distance) {
        mileage += distance;
        cout << "After driving " << distance << " miles, updated mileage is " << mileage << " miles.\n";
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Corolla", 20000.0f, 5000);

    // Display initial car details
    myCar.display();

    // Simulate driving the car
    myCar.drive(150);  // Drive 150 miles
    myCar.drive(300);  // Drive 300 miles

    return 0;
}