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

private:

	int 				_fpn_value;
	static int const	_digits = 8;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif //EX02_FIXED_HPP
