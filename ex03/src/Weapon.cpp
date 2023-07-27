/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:38:42 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 21:37:35 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon() {
}

const std::string&	Weapon::getType(void) {
	return _type;
}

void	Weapon::setType(std::string type) {
	_type = type;
}
