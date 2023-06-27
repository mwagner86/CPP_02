//
// Created by max on 6/25/23.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default Constructor called" << std::endl;
	this->_fpn_value= 0;
}

Fixed::Fixed(Fixed const &src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_fpn_value = src._fpn_value;
}

Fixed::Fixed(int const src) {
	// std::cout << "Int constructor called" << std::endl;
	this->_fpn_value = src << Fixed::_digits;
}

Fixed::Fixed(float const src) {
	// std::cout << "Float constructor called << std::endl;";
	this->_fpn_value = (int)roundf(src * (1 << Fixed::_digits));
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpn_value);
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fpn_value = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_fpn_value = rhs._fpn_value;
	return *this;
}

float	Fixed::toFloat() const {
	return ((float)this->_fpn_value / (1 << Fixed::_digits));
}

int		Fixed::toInt() const {
	return (this->_fpn_value >> Fixed::_digits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}

bool	Fixed::operator>(Fixed const & src) const {
	if (this->_fpn_value > src._fpn_value)
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & src) const {
	if (this->_fpn_value < src._fpn_value)
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & src) const {
	if (this->_fpn_value >= src._fpn_value)
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & src) const {
	if (this->_fpn_value <= src._fpn_value)
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & src) const {
	if (this->_fpn_value == src._fpn_value)
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & src) const {
	if (this->_fpn_value != src._fpn_value)
		return true;
	return false;
}