#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a(1.01f);
	Fixed b(2.01f);
	Fixed c;

	std::cout << "a is now: " << a << std::endl;
	std::cout << "b is now: " << b << std::endl;
	// Testing assignment operator
	c = a;
	std::cout << "c is now: " << c << std::endl;

	// Testing comparison operators
	if (a > b) {
		std::cout << "a is greater than b" << std::endl;
	}

	if (a < b) {
		std::cout << "a is less than b" << std::endl;
	}

	if (a >= b) {
		std::cout << "a is greater than or equal to b" << std::endl;
	}

	if (a <= b) {
		std::cout << "a is less than or equal to b" << std::endl;
	}

	if (a == b) {
		std::cout << "a is equal to b" << std::endl;
	}

	if (a != b) {
		std::cout << "a is not equal to b" << std::endl;
	}

	// Testing arithmetic operators
	Fixed sum = a + b;
	std::cout << "Sum of a and b: " << sum << std::endl;

	Fixed difference = a - b;
	std::cout << "Difference of a and b: " << difference << std::endl;

	Fixed product = a * b;
	std::cout << "Product of a and b: " << product << std::endl;

	Fixed quotient = a / b;
	std::cout << "Quotient of a and b: " << quotient << std::endl;

	// Testing pre-increment operator
	++a;
	std::cout << "After pre-increment, a is: " << a << std::endl;

	// Testing post-increment operator
	Fixed postInc = b++;
	std::cout << "After post-increment, b is: " << b << std::endl;
	std::cout << "Value before post-increment: " << postInc << std::endl;

	// Testing pre-decrement operator
	--a;
	std::cout << "After pre-decrement, a is: " << a << std::endl;

	// Testing post-decrement operator
	Fixed postDec = b--;
	std::cout << "After post-decrement, b is: " << b << std::endl;
	std::cout << "Value before post-decrement: " << postDec << std::endl;

	// Testing min and max functions
	Fixed x(3.7f);
	Fixed y(1.2f);
	const Fixed & minVal = Fixed::min(x, y);
	std::cout << "The smallest value is: " << minVal << std::endl;

	const Fixed & maxVal = Fixed::max(x, y);
	std::cout << "The greatest value is: " << maxVal << std::endl;

	return 0;
}
