#include <iostream>
#include <sstream>
#include <string>
#include "Server.h"

Server::Server(const std::string& model, const std::string& manufacturer, const std::string& OS, int PowerSupply)
	: Device(model, manufacturer), OS{OS}, PowerSupply{PowerSupply} {}

std::string Server::toString() {
	std::ostringstream temp;
	temp << Device::toString() 
		<< "Operating System: " << OS << '\n'
		<< "Power Supply: " << PowerSupply << "W";
	return temp.str();
}