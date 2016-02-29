#include <string>

#pragma once

class Employee {
private:
	std::string fName, lName, department, position;
	int id;
public:
	Employee();
	~Employee();
	void setID(int id);
	int getID();
	void setFirstName(std::string fName);
	std::string getFirstName();
	void setLastName(std::string lName);
	std::string getLastName();
	void setDepartment(std::string department);
	std::string getDepartment();
	void setPosition(std::string position);
	std::string getPosition();
};