/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:22:31 by oel-houm          #+#    #+#             */
/*   Updated: 2024/12/06 16:51:55 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
• The program name is btc.
• Your program must take a file as argument.
*/

int	main(int ac, char **av) {
	if (ac != 2) {
		// check if second arg is a file
		// check if contains date and value
		// check if contains valid date format year month day
		// value must be either positive int or float between 0 and 1000
	}
	return 0;
}
/*
 ./btc
 Error: could not open file.
*/

/*
 ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
*/
