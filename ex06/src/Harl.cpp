/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:25:07 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 21:25:18 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::_debug(void) {
	std::cout << DEBUG_MSG << std::endl;
}
void	Harl::_info(void) {
	std::cout << INFO_MSG << std::endl;
}
void	Harl::_warning(void) {
	std::cout << WARNING_MSG << std::endl;
}
void	Harl::_error(void) {
	std::cout << ERROR_MSG << std::endl;
}

void	Harl::complain(std::string level) {
	std::string levels[ARRAY_FUNC_SIZE] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functinon[ARRAY_FUNC_SIZE])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	for (int i = 0; i < ARRAY_FUNC_SIZE; i++) {
		if (levels[i].compare(level) == 0) {
			(this->*functinon[i])();
			return;
		}
	}
	std::cout << NO_HAVE_MSG << std::endl;
}
