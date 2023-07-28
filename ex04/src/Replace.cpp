/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:19:22 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 03:21:33 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(){
}

Replace::Replace(std::string input_file_name, std::string s1, std::string s2) {
	_input_file_name = input_file_name;
	_s1 = s1;
	_s2 = s2;
}

Replace::~Replace() {
}

bool	Replace::_openInputFile() {
	_input_file.open(_input_file_name);
	if (_input_file.is_open() == false) {
		std::cout << RED ERROR CLR_END OPEN_ERROR << _input_file_name << std::endl;
		return false;
	}
	return true;
}

bool	Replace::_openOutputFile() {
	_output_file_name = std::string(_input_file_name) + ".replace";
	_output_file.open(_output_file_name);
	if (_output_file.is_open() == false) {
		std::cout << RED ERROR CLR_END CREATE_ERROR << _output_file_name << std::endl;
		return false;
	}
	return true;
}

void	Replace::_closeInputOutputFiles() {
	if (_input_file.is_open())
		_input_file.close();
	if (_output_file.is_open())
		_output_file.close();
}

void	Replace::doReplace() {
	if (_openInputFile() && _openOutputFile()) {
		_input_file.seekg(0, std::ios::end);
		_file_content.reserve(_input_file.tellg());
		_input_file.seekg(0, std::ios::beg);
		_file_content.assign((std::istreambuf_iterator<char>(_input_file)),
			std::istreambuf_iterator<char>());
		_s1_length = _s1.length();
		_s2_length = _s2.length();
		size_t position = _file_content.find(_s1);
		if (_s1 != _s2) {
			while (position != std::string::npos) {
				_file_content.erase(position, _s1_length);
				_file_content.insert(position, _s2);
				position = _file_content.find(_s1, position + _s2_length);
			}
		}
		_output_file << _file_content;
	}
	_closeInputOutputFiles();
}
