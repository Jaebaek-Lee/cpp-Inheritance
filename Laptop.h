#ifndef LAPTOP_H
#define LAPTOP_H
#include "Device.h"
#pragma once

class Laptop : public Device {
public:
	Laptop(std::string, std::string, std::string, int);
	std::string toString();
	bool operator<(const Laptop&);
	bool operator>(const Laptop&);
private:
	std::string os;
	int PerformanceScore;
};

#endif
