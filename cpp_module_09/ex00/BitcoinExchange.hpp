/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:22:18 by oel-houm          #+#    #+#             */
/*   Updated: 2024/12/06 16:57:09 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef // BITCOINEXCHANGE_HPP
#define // BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange {
	private:
		std::map<string, float> exchangeRates;
	public:
		BitcoinExchange(const std::string& dbFile);
		float getRate();
		void loadDatabase();
};

#endif

