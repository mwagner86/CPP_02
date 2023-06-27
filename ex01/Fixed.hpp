//
// Created by max on 6/25/23.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed();
	Fixed(Fixed const & src);
	Fixed(int const src);
	Fixed(float const src);
	~Fixed();

	Fixed &	operator=( Fixed const & rhs );
	int		getRawBits() const;
	void	setRawBits( int const raw );
	float	toFloat() const;
	int		toInt() const;

private:

	int 				_fpn_value;
	static int const	_digits = 8;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif //EX01_FIXED_HPP
