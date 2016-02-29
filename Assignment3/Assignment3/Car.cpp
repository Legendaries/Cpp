#include "Car.h"

Car::Car(std::string make, std::string model, float speed) {
	this->make = make;
	this->model = model;
	this->speed = speed;
}

Car::~Car() {}

void Car::accelerate() {
	speed += 5;
}

void Car::brake() {
	if (speed - 5 >= 0)
		speed -= 5;
	else
		speed = 0;
}