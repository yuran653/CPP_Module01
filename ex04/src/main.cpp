/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:18:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/28 02:40:29 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char** argv) {
	(void) argv;
	if (argc != 4) {
		std::cout << RED ERROR CLR_END PARAMS_ERROR << std::endl
			<< PARAMS_CORRECT << std::endl;
		return 0;
	}
	std::ifstream input_file;
	input_file.open(argv[1]);
	if (input_file.is_open() == false) {
		std::cout << RED ERROR CLR_END FILE_ERROR << argv[1] << std::endl;
		return 0;
	}
	return 0;
}
