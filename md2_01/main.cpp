#include <iostream>
#include "time.h"

int main()
{
	Time a, b;
	std::cout << "Time a: ";
	std::cin >> a;

	b = a;

	std::cout << "Time a +1 second: " << ++a << std::endl;
	std::cout << "Time b: " << b << std::endl;
	b++;
	std::cout << "Time b: " << b << std::endl;
	++b;
	std::cout << "Time b: " << b << std::endl;

	b--;


	std::cout << "Time b: " << b << std::endl;

	if (a > b)
		std::cout << "Time a > Time b" << std::endl;
	if (a < b)
		std::cout << "Time a < Time b" << std::endl;
	if (a >= b)
		std::cout << "Time a >= Time b" << std::endl;
	if (a <= b)
		std::cout << "Time a <= Time b" << std::endl;
	if (a == b)
		std::cout << "Time a == Time b" << std::endl;
	if (a != b)
		std::cout << "Datums a != Datums a" << std::endl;
}