/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:19:22 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 03:07:16 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
		horde[i].announce();
	}
	return horde;
}
