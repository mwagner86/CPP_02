//
// Created by max on 6/25/23.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#pragma once
#include <iostream>
#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"

class Fixed {

public:

	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=( Fixed const & rhs );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int 				_fpn_value;
	static int const	_digits = 8;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );


#endif //EX00_FIXED_HPP
