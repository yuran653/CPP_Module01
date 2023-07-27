/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:35:58 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 21:48:56 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {
}

HumanA::HumanA(std::string name, Weapon& club) {
	_name = name;
	_club = &club;
}

HumanA::~HumanA() {
}

const std::string&	HumanA::getName(void) {
	return _name;
}

const std::string&	HumanA::getClub(void) {
	return _club->getType();
}

void	HumanA::attack(void) {
	std::cout << getName() << " attacks with their " << getClub() << std::endl;
}
