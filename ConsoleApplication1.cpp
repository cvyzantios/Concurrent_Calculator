#include "pch.h"
#include <iostream>
using namespace std;

// Δήλωση των συναρτήσεων πριν από τη χρήση τους
int sum(int x, int y);
int min(int x, int y);
int mult(int x, int y);
float division(int x, int y);


int main()
{
	int x, y;

	// Εκτύπωση των μηνυμάτων πριν την εισαγωγή δεδομένων
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: ";
	cin >> y;

	int result1 = sum(x, y);  // Κλήση της συνάρτησης sum
	int result2 = min(x, y);  // Κλήση της συνάρτησης min
	int result3 = mult(x, y); // Κλήση της συνάρτησης mult
	float result4 = division(x, y); // Κλήση της συνάρτησης division

	// Εκτύπωση των αποτελεσμάτων
	cout << "The addition result is " << result1 << endl;
	cout << "The subtraction result is " << result2 << endl;
	cout << "The multiplication result is " << result3 << endl;
	cout << "The division result is " << result4 << endl;

	return 0;
}
// Ορισμός της συνάρτησης sum
int sum(int x, int y)
{
	return x + y;
}

// Ορισμός της συνάρτησης min
int min(int x, int y)
{
	return x - y;
}

// Ορισμός της συνάρτησης mult
int mult(int x, int y)
{
	return x * y;
}

// Ορισμός της συνάρτησης division
float division(int x, int y)
{
	return x / y;
}


