/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:25:40 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 23:58:45 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool	checkArgc(int argc) {
	if (argc != 2) {
		std::cout << NO_HAVE_MSG << std::endl;
		return false;
	}
	return true;
}

int	main(int argc, char** argv) {
	if (checkArgc(argc) == false)
		return 0;
	std::string levels[ARRAY_SIZE] = {LVL_ONE, LVL_TWO, LVL_THREE, LVL_FOUR};
	size_t level = 0;
	while (level < ARRAY_SIZE && levels[level].compare(std::string(argv[1])))
		level++;
	if (level >= ARRAY_SIZE) {
		std::cout << NO_HAVE_MSG << std::endl;
		return 0;
	}
	Harl harl;
	for (; level < ARRAY_SIZE; level++) {
		std::cout << "[ " << levels[level] << " ]" << std::endl;
		harl.complain(levels[level]);
		std::cout << std::endl;
	}
	return 0;
}
