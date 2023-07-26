/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:57:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 03:46:05 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* zombie_horde;
	zombie_horde = zombieHorde(SIZE, "Zombie");
	for (Zombie* ptr = zombie_horde; ptr != zombie_horde + SIZE; ptr++) {
		ptr->setName("RenamedZombie");
	}
	for (int i = SIZE - 1; i >= 0; i--) {
		std::cout << "[" << i << "]";
		zombie_horde[i].announce();
	}
	delete[] zombie_horde;

	return 0;
}
