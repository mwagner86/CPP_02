//
// Created by max on 6/25/23.
//

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed() {
	std::cout << "Default Constructor called" << std::endl;
	this->_fpn_value= 0;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fpn_value = src.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpn_value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpn_value = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_fpn_value = rhs.getRawBits();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i ) {
	o << "The value of _fpn_value is : " << i.getRawBits();
	return o;
}