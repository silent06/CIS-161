#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
#include <iostream>

using namespace std;



/*int main() {
	int a, b, c;
	a = b = c= 0;

	cout << "Enter a number: ";
	cin >> a;

	cout << "\nEnter a number: ";
	cin >> b;

	cout << "\nEnter a number: ";
	cin >> c;

	cout << "Addition:           " << (a + b + c) << endl;
	cout << "Subtraction:        " << (a - b - c) << endl;
	cout << "Multiplication:     " << (a * b) << endl;
	cout << "Division:           " << (a / b) << endl;
	cout << "Modulo (remainder): " << (a % b) << endl;
	system("pause");
	return 0;
}*/



int main() {
	double a, c;
	 a = c = 0;
	 double b;
	 b = 0;
	

	cout << "Enter Principal: ";
	cin >> a;

	cout << "\nEnter a Interest Rate: ";
	cin >> b;

	cout << "\nEnter a number of Times Compounded: ";
	cin >> c;

	cout << "Interest Rate: " << (b * 100) << endl;
	cout << "Times Compounded:" << (c) << endl;
	cout << "Principal: $" << (a) << endl;
	cout << "Interest: $" << (a * b) << endl;
	cout << "Amount in Savings:$" << (a * (1 + b/c)*4) << endl;
	system("pause");
	return 0;
}

//****Results****
//Interest Rate: 4.25
//Times Compounded: 12
//Principal: $1000
//Interest: $42.5
//Amount in Savings: $4,014.17 




