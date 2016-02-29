#pragma once

#include <string>

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
};

