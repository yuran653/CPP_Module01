/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:17:58 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 02:27:46 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#define RED "\033[31m"
#define CLR_END "\033[0m"
#define ERROR "ERROR: "
#define PARAMS_ERROR "Parameters should be in the following order:"
#define	PARAMS_CORRECT "./replace <File name> <String to replace> <String for replace>"
#define OPEN_ERROR "Can't open file: "
#define CREATE_ERROR "Can't create/open file: "

#include <fstream>
#include <iostream>
#include <string>

class Replace {
	private:
		std::ifstream	_input_file;
		std::ofstream	_output_file;
		std::string		_file_content;
		std::string		_input_file_name;
		std::string		_output_file_name;
		std::string		_s1;
		std::string		_s2;
		size_t			_s1_length;
		size_t			_s2_length;

	public:
		Replace();
		Replace(std::string input_file_name, std::string s1, std::string s2);
		~Replace();

		bool	openInputFile();
		bool	openOutputFile();
		void	doReplace();
		void	closeInputOutputFiles();
};

bool	checkArgc(int argc);

#endif
