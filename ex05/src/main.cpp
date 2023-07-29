/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:58:13 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 20:22:52 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl harl;

	std::string prompt;
	while (prompt.compare("EXIT")) {
		std::cout << PROMPT_INTRO << std::endl << PROMPT_OPTIONS << std::endl;
		std::getline(std::cin, prompt);
		harl.complain(prompt);
		std::cout << std::endl << EXIT_INFO << std::endl << std::endl;
	}
	return 0;
}
