/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:25:40 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 23:25:56 by jgoldste         ###   ########.fr       */
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
	std::string levels[]
	return 0;
}
