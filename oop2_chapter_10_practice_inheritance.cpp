#include <iostream>
#include <string>
#include "Device.h"
#include "Server.h"
#include "Laptop.h"

using namespace std;

void temp(string a)
{
	cout << a;
}

class a {
public:
	string geta() { return aa; };
private:
	string aa = "aa";
};

class b : a {
public:
	b(a& a) { bb = geta(); }
private:
	string bb = "bb";
};

int main()
{
	//Device device("ProLiant", "HP"); //기본적으로 인자가 const 타입이다.
	//cout << device.toString();
	/*Server server("ProLiant", "HP", "RHEL", 1200);
	Server server2("PowerEdge", "Dell", "Ubuntu", 1400);

	cout << server.toString() << endl << endl;
	cout << server2.toString() << endl;*/
	Laptop laptop("MacBook Pro", "Apple", "Mac OS", 1898);
	Laptop laptop2("Gram", "LG", "Windows 11", 1518);

	cout << laptop.toString() << endl << endl;
	cout << laptop2.toString() << endl << endl;

	cout << boolalpha << (laptop > laptop2) << endl;
	cout << boolalpha << (laptop < laptop2) << endl;
}