
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct Person {
	string fName = "Jim";
	string lName = "Goudy";
	string suffix = "Master Programmer";
	double salary = numeric_limits<double>::max();
};

template <typename T>
T stddev(T numArray[], int size) {
	T mean = 0; // Calculates mean
	for (int i = 0; i < size; i++)
		mean += numArray[i];

	mean /= size;

	T result = 0;
	for (int i = 0; i < size; i++)
		result += pow(T(numArray[i] - mean), 2);

	return sqrt(result / double(size));
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

string getConcatenatedString(vector<string> &words) {
	string out = "";
	for (const auto &word : words)
		out += word;
	return out;
}

int getCharCount(vector<string> &words) {
	return getConcatenatedString(words).length();
}

void countCharsMenu() {
	vector<string> words;

	cout << "Enter your words, -1 to quit" << endl;
	string input;
	cin.ignore(1);
	while (true) {
		cout << "Enter a word: ";
		getline(cin, input);
		if (input != "-1")
			words.push_back(input);
		else
			break;
	}
	cout << "There are " << getCharCount(words) << " characters in \"" << getConcatenatedString(words) << "\"" << endl;
}

void personMenu() {
	vector<Person> people;

	cout << "Enter up to ten people, no more, that will be shown in the form, ___ ___ The ___ makes ___." << endl;
	string input;
	cin.ignore(1);
	while (true) {
		Person p;
		cout << "Enter a first name: ";
		getline(cin, p.fName);
		cout << "Enter a last name: ";
		getline(cin, p.lName);
		cout << "Enter a suffix: ";
		getline(cin, p.suffix);
		cout << "Enter a salary: ";
		cin >> p.salary;
		people.push_back(p);
		cout << "Enter 1 to continue or -1 to quit" << endl;
		cin.ignore(1);
		getline(cin, input);
		if (input != "-1" && people.size() < 10)
			continue;
		else if (people.size() >= 10) {
			cout << "Maximum amount of people inputted already" << endl;
			break;
		} else break;
	}
	double totalSalary = 0;
	for (Person p : people) {
		cout << p.fName << " " << p.lName << " The " << p.suffix << " makes " << p.salary << endl;
		totalSalary += p.salary;
	}
	cout << "Total Salary : " << totalSalary << endl;
	cout << "Average Salary : " << totalSalary / people.size() << endl;
}

void pause() {
	int x = 0;
	cin >> x;
}

int main() {
	int input = 0;

	while (input != -1) {
		cout << "Enter:\n\t1.Standard Deviation\n\t2. Calculate number of characters of words\n\t3. Deal with people\n\t-1. Quit" << endl;
		cin >> input;
		switch (input) {
			case 1: stdDevMenu();  break;
			case 2: countCharsMenu();  break;
			case 3: personMenu();  break;
			case -1: return 0;
		}
	}

	return 0;
}