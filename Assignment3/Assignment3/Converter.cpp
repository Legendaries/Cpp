#include "Converter.h"

double inToFt(double in) {
	return in / 12;
}

double ftToIn(double ft) {
	return ft * 12;
}

double fahrenheitToCelcius(double fahrenheit) {
	return (fahrenheit - 32)*(5.0 / 9.0);
}