#include <iostream>
#include "Fixed.hpp"

int main() {

/*	Fixed a;
	a.setRawBits(4242);

	std::cout << "Value of 'a' using getRawBits: " << a.getRawBits() << std::endl;*/

	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
