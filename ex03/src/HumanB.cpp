/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:36:49 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 22:00:11 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
}

HumanB::HumanB(std::string name) {
	_name = name;
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon& club) {
	_club = &club;
}

const std::string&	HumanB::getName(void) {
	return _name;
}

const std::string&	HumanB::getClub(void) {
	return _club->getType();
}

void	HumanB::attack(void) {
	std::cout << getName() << " attacks with their " << getClub() << std::endl;
}
