#include <iostream>
#include <vector>
#include <string>

#include "Employee.h"
#define MAX_EMPLOYEES 25

#include "Car.h"

#include "Converter.h"

void employeeMenu() {
	std::vector<Employee> employees;
	std::string input = "";
	while (true) {
		if (employees.size() >= MAX_EMPLOYEES) { std::cout << "You have reached the limit on employees, please buy the full version to add more" << std::endl; break; }
		std::cout << "Enter\ny. Add another employee\ns. Print\nn. Exit" << std::endl;
		std::cin >> input;
		if (input == "n") break;
		else if (input == "s") {
			for (Employee e : employees)
				std::cout << e << std::endl;
		} else if (input == "y") {
			Employee temp;
			std::cout << "Enter the first name." << std::endl;
			std::cin >> input;
			temp.setFirstName(input);
			std::cout << "Enter the last name." << std::endl;
			std::cin >> input;
			temp.setLastName(input);
			std::cout << "Enter the department name." << std::endl;
			std::cin >> input;
			temp.setDepartment(input);
			std::cout << "Enter the position." << std::endl;
			std::cin >> input;
			temp.setPosition(input);
			std::cout << "Enter the id." << std::endl;
			int id = 0;
			std::cin >> id;
			temp.setID(id);
			employees.push_back(temp);
		}
	}
}

void carMenu() {
	std::string make;
	std::cout << "Enter the make of your car" << std::endl;
	std::cin >> make;

	std::string model;
	std::cout << "Enter the model of your car" << std::endl;
	std::cin >> model;

	int speed;
	std::cout << "Enter the speed of your car" << std::endl;
	std::cin >> speed;

	Car car(make, model, speed);
	for (int i = 0; i < 5; i++) {
		car.accelerate();
		std::cout << car << std::endl;
	}
	for (int i = 0; i < 5; i++) {
		car.brake();
		std::cout << car << std::endl;
	}
}

void calculationsMenu() {
	int input = 0;
	double value = 0;
	while (true) {
		std::cout << "Enter\n1. Calculate feet to inches\n2. Calculate inches to feet\n3. Calculate fahrenheit to celcius\n4. quit" << std::endl;
		std::cin >> input;
		switch (input) {
			case 1:
				std::cout << "Enter your value" << std::endl;
				std::cin >> value;
				std::cout << ftToIn(value) << " Inches" << std::endl;
				break;
			case 2:
				std::cout << "Enter your value" << std::endl;
				std::cin >> value;
				std::cout << inToFt(value) << " Feet" << std::endl;
				break;
			case 3:
				std::cout << "Enter your value" << std::endl;
				std::cin >> value;
				std::cout << fahrenheitToCelcius(value) << " Celsius" << std::endl;
				break;
			case 4: return;
		}
	}
}

int main() {
	int input = 0;
	while (true) {
		std::cout << "Enter\n1. Employee System\n2. Car System\n3. Calculations\n4. quit" << std::endl;
		std::cin >> input;
		switch (input) {
			case 1: employeeMenu(); break;
			case 2: carMenu(); break;
			case 3: calculationsMenu(); break;
			case 4: return 0;
		}
	}
}