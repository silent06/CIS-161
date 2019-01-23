//============================================================================
// Name        : OverflowUnderflowRuse.cpp
// Author      : Michelle Ruse
// Version     :
// Copyright   : Your copyright notice
// Description : Overflow or underflow? in C++, Ansi-style
//============================================================================

#include <limits>
#include <cstddef> 
#include <iostream> 
using namespace std;
int main() {
	int myVar = std::numeric_limits<int>::max();

	cout << myVar << endl;
	cout << myVar * 1000 << endl;
	system("pause");
	return 0;
}
// Test Data 
// n/a 
// Results 
// 
// 