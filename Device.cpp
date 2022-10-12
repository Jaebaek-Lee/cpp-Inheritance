#include <iostream>
#include <string>
#include <sstream>
#include "Device.h"

Device::Device(const std::string& model, const std::string& manufacturer) : model{ model }, manufacturer{ manufacturer } {};

std::string Device::toString()
{
	std::ostringstream temp;
	temp << "Device model: " << model << "\nDevice manufacturer: " << manufacturer << '\n';
	return temp.str();
}