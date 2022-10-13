#include <iostream>
#include <string>
#include <sstream>
#include "Laptop.h"

Laptop::Laptop(std::string model, std::string manufacturer, std::string os, int ps) : Device(model, manufacturer), os{os}, PerformanceScore{ps} {}

std::string Laptop::toString() {
	std::ostringstream temp;
	temp << Device::toString() << "Operating Systemp: " << os
		<< "\nPerformance score: " << PerformanceScore;
	return temp.str();
}

bool Laptop::operator<(const Laptop& right) {
	return (PerformanceScore < right.PerformanceScore);
}

bool Laptop::operator>(const Laptop& right) {
	return (PerformanceScore > right.PerformanceScore);
}