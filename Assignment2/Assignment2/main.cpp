
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

template <typename T>
T stddev(T numArray[], int size) {
	int numItems = size;
	T mean = 0; // Calculates mean
	for (int i = 0; i < numItems; i++)
		mean += numArray[i];

	mean /= numItems;

	T result = 0;
	for (int i = 0; i < numItems; i++)
		result += pow(T(numArray[i] - mean), 2);

	return sqrt(result / double(numItems));
}

void stdDevMenu() {	
	double numArray[10000];
	int size = 0;
	cout << "Enter your numbers, -1 to quit" << endl;
	int input = 0;
	while(true) {
		cout << "Enter a number: ";
		cin >> input;
		if (input != -1)
			numArray[size++] = input;
		else
			break;
	}

	cout << "Standard Deviation: " << stddev<double>(numArray, size) << endl;
}

void pause() {
	int x = 0;
	cin >> x;
}

int main() {
	int input = 0;

	while (input != -1) {
		cout << "Enter:\n\t1.Standard Deviation\n\t-1. Quit" << endl;
		cin >> input;
		switch (input) {
			case 1: stdDevMenu();  break;
			case -1: return 0;
		}
	}

	return 0;
}