#include <iostream>
#include <string>
#include "Device.h"
#include "Server.h"

using namespace std;

void temp(string a)
{
	cout << a;
}

int main()
{
	//Device device("ProLiant", "HP"); //기본적으로 인자가 const 타입이다.
	//cout << device.toString();
	Server server("ProLiant", "HP", "RHEL", 1200);
	Server server2("PowerEdge", "Dell", "Ubuntu", 1400);

	cout << server.toString() << endl << endl;
	cout << server2.toString() << endl;
}