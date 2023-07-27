/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:39:16 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 21:49:15 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon*		_club;

	public:
		HumanA();
		HumanA(std::string name, Weapon& club);
		~HumanA();

		void				attack(void);
		const std::string&	getName(void);
		const std::string&	getClub(void);
};

#endif
