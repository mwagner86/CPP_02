//
// Created by max on 6/25/23.
//

#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {

public:

	// Constructor/Destructor
	Fixed();
	Fixed(Fixed const & src);
	Fixed(int src);
	Fixed(float src);
	~Fixed();

	// member functions
	int		getRawBits() const;
	void	setRawBits(int raw);
	float	toFloat() const;
	int		toInt() const;

	// overloaded assignment operator
	Fixed &	operator=( Fixed const & rhs );

	// overloaded comparison operators
	bool	operator>(Fixed const & src) const;
	bool	operator<(Fixed const & src) const;
	bool	operator>=(Fixed const & src) const;
	bool	operator<=(Fixed const & src) const;
	bool	operator==(Fixed const & src) const;
	bool	operator!=(Fixed const & src) const;
	// overloaded arithmetic operators
	Fixed	operator+(Fixed const & src) const;
	Fixed	operator-(Fixed const & src) const;
	Fixed	operator*(Fixed const & src) const;
	Fixed	operator/(Fixed const & src) const;
	// overloaded pre- and post- increment/decrement operators
	Fixed &	operator++();
	Fixed	operator++(int);
	Fixed &	operator--();
	Fixed	operator--(int);

	// static overloaded member functions returning smallest/greatest number
	static Fixed & min(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);

private:

	int 				_fpn_value;
	static int const	_digits = 8;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif //EX02_FIXED_HPP
