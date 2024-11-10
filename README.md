//BMI-Calculator-Cpp

A simple BMI (Body Mass Index) Calculator written in C++. This console application calculates BMI based on user-inputted weight and height, classifies the result, and provides basic health tips based on the BMI category. Users can choose between Metric (kilograms, meters) and Imperial (pounds, inches) units.



Table of Contents:
1.Features
2.Demo
3.Getting Started
4.Usage
5.BMI Categories


**1.Features:**

Metric and Imperial Support: Choose between Metric (kg, meters) and Imperial (lbs, inches) units.
Health Tips: Provides health tips based on the calculated BMI category.
Simple User Interface: Interactive console-based interface.


**Demo:**

Here’s a quick example of the application in action:

//Welcome to the BMI Calculator!
  Would you like to use (M)etric or (I)mperial units? Enter M or I: M
  Enter your weight in kilograms: 65
  Enter your height in meters or centimeters (e.g., 1.76 for meters or 176 for cm): 176

  Your BMI is: 20.99
  Category: Normal weight

  Health Tip: You're in a healthy weight range! 
  Keep up with a balanced diet and regular exercise.//


**Getting Started:**

Prerequisites

    C++ Compiler: You need a C++ compiler installed on your system (e.g., GCC, MSVC, Clang).
    C++ Standard: This code is compatible with C++11 or later.

Installation

  1.Compile the Code:

      For GCC: g++ bmi_calculator.cpp -o bmi_calculator

      For Windows with MSVC: cl bmi_calculator.cpp
    
  2.Run the Application:

      ./bmi_calculator

    
**Usage:**

    1.Run the compiled application.
    2.Choose your preferred unit system:
      - M for Metric (kg and meters).
      - I for Imperial (lbs and inches).
    3.Enter your weight and height when prompted.
    4.The application will calculate and display your BMI, along with a health tip based on your BMI category.

    
**BMI Categories:**

The BMI categories in this application are based on standard ranges:

    Category -	BMI Range
    Underweight	- Less than 18.5
    Normal weight -	18.5 to 24.9
    Overweight - 25.0 to 29.9
    Obese	- 30.0 and above
    
Note: These categories are general guidelines. For personalized health advice, consult a healthcare provider.

