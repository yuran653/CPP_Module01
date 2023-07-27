/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:35:23 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 20:52:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		const std::string&	getType(void);
		void				setType(std::string type);
};

#endif
