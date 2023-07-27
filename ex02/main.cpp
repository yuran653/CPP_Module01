/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:52:12 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/27 18:29:34 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <memory>

int	main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Printing the addresses of the variables using 'std::addressof()' function:" << std::endl;
	std::cout << "\tThe memory address of the string variable:\t" << std::addressof(str) << std::endl;
	std::cout << "\tThe memory address held by stringPTR:\t\t" << std::addressof(stringPTR) << std::endl;
	std::cout << "\tThe memory address held by stringREF\t\t" << std::addressof(stringREF) << std::endl;

	std::cout << "Printing the addresses of the variables without using 'std::addressof()' function:" << std::endl;
	std::cout << "\tThe memory address of the string variable:\t" << &str << std::endl;
	std::cout << "\tThe memory address held by stringPTR:\t\t" << &stringPTR << std::endl;
	std::cout << "\tThe memory address held by stringREF\t\t" << &stringREF << std::endl;

	std::cout << "Printing the addresses of the variables without using 'std::addressof()' function:" << std::endl;
	std::cout << "\tThe memory address of the string variable:\t" << str << std::endl;
	std::cout << "\tThe memory address held by stringPTR:\t\t" << stringPTR << std::endl;
	std::cout << "\tThe memory address held by stringREF\t\t" << stringREF << std::endl;

	return 0;
}
