// April Shin
// CSIS 137 Wed Night Class
// Homework Three
// Partnering with Jonah Moon

#include "FeetInches.h"
#include <iostream>
using namespace std;

int main()
{
	// Test 1: Testing input and output operator:
	FeetInches test1;
	cout << "Please enter the number of feet and inches in the following format: \"2 ft 2 in\"" << endl;
	cin >> test1;
	cout << "Test 1: " << test1 << endl;

	// Test 2: Testing constructor with no arguments:
	FeetInches test2;
	cout << "Test 2: " << test2 << endl;

	// Test 3: Testing constructor with two arguments:
	FeetInches test3(3, 2);
	cout << "Test 3: " << test3 << endl;
	
	// Test 4: Testing constructor with two arguments with different variations:
	FeetInches test4(-3, -2);
	cout << "Test 4: " << test4 << endl;

	// Test 5: Testing +operator
	FeetInches test5;
	test5 = test3 + test2;  // Answer: 3 ft 2 in
	cout << "Test 5: " << test5 << endl;

	// Test 6: Testing -operator
	FeetInches test6;
	test6 = test3 + test4;  // Answer: 6 ft 4 in
	cout << "Test 6: " << test6 << endl;

	// Test 7: Testing relational operators
	FeetInches test7(1, 1);
	cout << "Test 7: " << endl;
	if (test7 == test7)
	{
		cout << "test7 == test7" << endl;
	}
	
	if (test2 != test7)
	{
		cout << "test1 != test7" << endl;
	}

	if (test7 > test2)
	{
		cout << "test7 > test2" << endl;
	}

	if (test2 < test7)
	{
		cout << "test2 < test7" << endl;
	}

	if (test7 <= test7)
	{
		cout << "test7 <= test7" << endl;
	}

	if (test3 >= test4)
	{
		cout << "test3 >= test4" << endl;
	}

	// Test 8: Testing conversion and print function
	FeetInches test8(2, 6);
	test8.printDecConversion();

	system("PAUSE");
	return 0;
}