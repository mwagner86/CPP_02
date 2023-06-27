#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	// check if "a" is initialized to 0
	// std::cout << "a is " << a << std::endl;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );


/*	// Print the raw integer value, which includes the fractional bits
	int rawValue = c.getRawBits();
	std::cout << "Raw inter value of c : " << rawValue << std::endl;*/

/*	// Print out the raw integer value with the insertion operator overload
 	// you need to change the insertion operator behaviour in Fixed.cpp
	Fixed fixedNumber(42.123f);
	std::cout << fixedNumber << " " << std::endl;*/

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

/*	std::cout << std::endl;
	Fixed e;
	e.setRawBits(64);
	std::cout << "Value of 'e' using getRawBits: " << e.getRawBits() << std::endl;
	std::cout << "e is " << e.toFloat() << " as float" << std::endl;*/

	return 0;
}
