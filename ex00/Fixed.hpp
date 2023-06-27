/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:44:53 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:45:07 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include <iostream>

class Fixed {

public:

	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);
	int		getRawBits() const;
	void	setRawBits(int raw);

private:

	int 				_fpn_value;
	static int const	_digits = 8;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif //EX00_FIXED_HPP
