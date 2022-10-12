#ifndef DEVICE_H
#define DEVICE_H
#pragma once

#include <iostream>

class Device
{
public:
	Device(const std::string&, const std::string&);
	std::string toString();
private:
	std::string model;
	std::string manufacturer;
};

#endif
