#pragma once

#include <string>
#include <iostream>

class Car {
public:
	Car(std::string make, std::string model, float speed);
	~Car();
private:
	std::string make;
	std::string model;
	float speed;
public:
	void accelerate();
	void brake();
	friend std::ostream& operator<<(std::ostream& os, const Car& c);
};
