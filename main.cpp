#include <iostream>
#include <iomanip>  // For setting decimal precision

using namespace std;

int main() {
    double weight, height, bmi;
    char unit;
    
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "Would you like to use (M)etric or (I)mperial units? Enter M or I: ";
    cin >> unit;
    
    if (unit == 'M' || unit == 'm') {
        // Metric units: weight in kilograms, height in meters or centimeters
        cout << "Enter your weight in kilograms: ";
        cin >> weight;
        
        cout << "Enter your height in meters or centimeters (e.g., 1.76 for meters or 176.8 for cm): ";
        cin >> height;
        
        // Check if the input height is likely in centimeters
        if (height > 3) {  // Assuming heights above 3 are given in cm
            height /= 100;  // Convert centimeters to meters
        }
        
        bmi = weight / (height * height);
    } 
    else if (unit == 'I' || unit == 'i') {
        // Imperial units: weight in pounds, height in inches
        cout << "Enter your weight in pounds: ";
        cin >> weight;
        cout << "Enter your height in inches: ";
        cin >> height;
        
        bmi = (weight / (height * height)) * 703;
    } 
    else {
        cout << "Invalid input! Please enter 'M' for Metric or 'I' for Imperial units." << endl;
        return 1;  // Exit program if input is invalid
    }

    // Display BMI with two decimal points
    cout << fixed << setprecision(2);
    cout << "\nYour BMI is: " << bmi << endl;

    // Determine BMI category
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obese" << endl;
    }

    // Health tip based on BMI
    cout << "\nHealth Tip: ";
    if (bmi < 18.5) {
        cout << "Consider consulting a healthcare provider to explore ways to reach a healthier weight.";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You're in a healthy weight range! Keep up with a balanced diet and regular exercise.";
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Consider lifestyle changes to manage weight for better health.";
    } else {
        cout << "It's important to consult a healthcare provider for personalized health advice.";
    }
    cout << endl;

    return 0;
}
