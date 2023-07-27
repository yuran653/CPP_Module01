/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:36:33 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 21:59:59 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon*		_club;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void				attack(void);
		void				setWeapon(Weapon& club);
		const std::string&	getName(void);
		const std::string&	getClub(void);
};

#endif
