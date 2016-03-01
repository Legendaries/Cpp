#include "Employee.h"

Employee::Employee() {}

Employee::~Employee() {

}

void Employee::setID(int id) {
	this->id = id;
}

int Employee::getID() {
	return this->id;
}

void Employee::setFirstName(std::string fName) {
	this->fName = fName;
}

std::string Employee::getFirstName() {
	return this->fName;
}

void Employee::setLastName(std::string lName) {
	this->lName = lName;
}

std::string Employee::getLastName() {
	return this->lName;
}

void Employee::setDepartment(std::string department) {
	this->department = department;
}

std::string Employee::getPosition() {
	return this->position;
}

void Employee::setPosition(std::string position) {
	this->position = position;
}

std::string Employee::getDepartment() {
	return this->department;
}

std::ostream& operator<<(std::ostream& os, const Employee& e) {
	os << e.position << " " << e.fName << " " << e.lName << " in " << e.department << " with id: " << e.id;
	return os;
}