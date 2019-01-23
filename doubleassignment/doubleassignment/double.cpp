//============================================================================
// Name        : IntArithmetic.cpp
// Author      : Michael Creech 
// Version     :
// Copyright   : Your copyright notice
// Description : Arithmetic using int data type in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b;
	a = b = 0;

	cout << "Enter a number: ";
	cin >> a;

	cout << "\nEnter a number: ";
	cin >> b;

	cout << "Addition:           " << (a + b) << endl;
	cout << "Subtraction:        " << (a - b) << endl;
	cout << "Multiplication:     " << (a * b) << endl;
	cout << "Division:           " << (a / b) << endl;
	cout << "Modulo (remainder): " << (a % b) << endl;
	system("pause");
	return 0;
}
// Test Data
// a = 8, b = 15
// Results
// Enter a number: 8
//
// Enter a number: 15
// Addition:           23
// Subtraction:        -7
//Multiplication: 120
//Division: 0.533333
// Modulo (remainder): n/a, couldnt do!