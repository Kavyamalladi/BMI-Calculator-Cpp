#include <iostream>
#include <iomanip> // for std::setprecision
#include <string> // for std::string

using namespace std;

class Person {
private:
    double weight; // weight in kilograms
    double height; // height in meters

public:
    // Constructor
    Person(double w, double h) : weight(w), height(h) {}

    // Method to calculate BMI
    double calculateBMI() {
        return weight / (height * height); // Correct formula for BMI
    }

    // Method to determine BMI category
    string bmiCategory() {
        double bmi = calculateBMI();
        if (bmi < 18.5) {
            return "Underweight";
        } else if (bmi >= 18.5 && bmi < 24.9) {
            return "Normal weight";
        } else if (bmi >= 25 && bmi < 29.9) {
            return "Overweight";
        } else {
            return "Obesity";
        }
    }
};

int main() {
    double weight, height;
    string input;

    while (true) {
        // Ask user for system input (M/I for Metric/Imperial)
        cout << "Enter 'M' for Metric or 'I' for Imperial (or 'exit' to quit): ";
        cin >> input;

        if (input == "exit") {
            break;
        }

        if (input == "M" || input == "m") {
            // Metric system (weight in kg, height in cm)
            cout << "Enter weight in kg: ";
            cin >> weight;
            cout << "Enter height in cm: ";
            cin >> height;
            // Convert height from cm to meters
            height /= 100;
        } else if (input == "I" || input == "i") {
            // Imperial system (weight in pounds, height in inches)
            cout << "Enter weight in pounds: ";
            cin >> weight;
            cout << "Enter height in inches: ";
            cin >> height;

            // Convert to metric system (1 pound = 0.453592 kg, 1 inch = 0.0254 meters)
            weight *= 0.453592; // Convert weight from pounds to kilograms
            height *= 0.0254;   // Convert height from inches to meters

            // Debugging outputs to check conversion
            cout << "Converted weight (kg): " << weight << endl;
            cout << "Converted height (m): " << height << endl;
        } else {
            cout << "Invalid input. Please enter 'M' for Metric or 'I' for Imperial." << endl;
            continue;
        }

        // Create a Person object
        Person person(weight, height);

        // Calculate and display BMI and category
        double bmi = person.calculateBMI();
        cout << fixed << setprecision(2); // Set decimal precision
        cout << "BMI: " << bmi << endl;
        cout << "Category: " << person.bmiCategory() << endl;

        // Add space after successful calculation
        cout << endl;
    }

    return 0;
}
