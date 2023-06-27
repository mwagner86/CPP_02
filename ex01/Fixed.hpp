/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:46:15 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:46:17 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed();
	Fixed(Fixed const & src);
	Fixed(int src);
	Fixed(float src);
	~Fixed();

	Fixed &	operator=( Fixed const & rhs );
	int		getRawBits() const;
	void	setRawBits(int raw);
	float	toFloat() const;
	int		toInt() const;

private:

	int 				_fpn_value;
	static int const	_digits = 8;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif //EX01_FIXED_HPP
