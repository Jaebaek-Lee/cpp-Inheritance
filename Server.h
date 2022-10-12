#include "Device.h"
#ifndef SERVER_H
#define SERVER_H
#pragma once

class Server : public Device
{
public:
	Server(const std::string&, const std::string&, const std::string&, int = 0);
	std::string toString();
private:
	std::string OS;
	int PowerSupply;
};

#endif
