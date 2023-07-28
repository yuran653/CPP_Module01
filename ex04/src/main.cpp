/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:18:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 02:30:09 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool	checkArgc(int argc) {
	if (argc != 4) {
		std::cout << RED ERROR CLR_END PARAMS_ERROR << std::endl
			<< PARAMS_CORRECT << std::endl;
		return false;
	}
	else
		return true;
}

int	main(int argc, char** argv) {
	if (checkArgc(argc) == false)
		return 1;
	Replace strReplace(argv[1], argv[2], argv[3]);
	if (strReplace.openInputFile() == false)
		return 1;
	if (strReplace.openOutputFile() == false)
		return 1;
	strReplace.doReplace();
	strReplace.closeInputOutputFiles();
	return 0;
}

// bool	checkArgc(int argc) {
// 	if (argc != 4) {
// 		std::cout << RED ERROR CLR_END PARAMS_ERROR << std::endl
// 			<< PARAMS_CORRECT << std::endl;
// 		return false;
// 	}
// 		return true;
// }

// int	main(int argc, char** argv) {
// 	if (checkArgc(argc) == false)
// 		return 1;
// 	std::ifstream input_file;
// 	input_file.open(argv[1]);
// 	if (input_file.is_open() == false) {
// 		std::cout << RED ERROR CLR_END OPEN_ERROR << argv[1] << std::endl;
// 		return 1;
// 	}
// 	std::string output_file_name = std::string(argv[1]) + ".replace";
// 	std::ofstream output_file(output_file_name);
// 	if (output_file.is_open() == false) {
// 		std::cout << RED ERROR CLR_END CREATE_ERROR << output_file_name << std::endl;
// 		return 1;
// 	}
// 	std::string file_content;
// 	input_file.seekg(0, std::ios::end);
// 	file_content.reserve(input_file.tellg());
// 	input_file.seekg(0, std::ios::beg);
// 	file_content.assign((std::istreambuf_iterator<char>(input_file)),
// 		std::istreambuf_iterator<char>());
// 	input_file.close();
// 	size_t s1_length = std::string(argv[2]).length();
// 	size_t s2_length = std::string(argv[3]).length();
// 	size_t position = file_content.find(std::string(argv[2]));
// 	if (std::string(argv[2]) != std::string(argv[3])) {
// 		while (position != std::string::npos) {
// 			file_content.erase(position, s1_length);
// 			file_content.insert(position, std::string(argv[3]));
// 			position = file_content.find(std::string(argv[2]), position + s2_length);
// 		}
// 	}
// 	output_file << file_content;
// 	output_file.close();
// 	return 0;
// }

// input_file.seekg(0, std::ios::end); // Move the file pointer to the end of the file
// file_content.reserve(input_file.tellg()); // Reserve memory for the file content
// input_file.seekg(0, std::ios::beg); // Move the file pointer back to the beginning
// file_content.assign((std::istreambuf_iterator<char>(input_file)),
// 	std::istreambuf_iterator<char>()); // Read the entire file content and assign it to the string
// <std::istreambuf_iterator<char>(input_file)> is an iterator that points to the first
// character 	of the input stream <input_file>. When dereferenced, it gives you the first
// character of the stream.
// <std::istreambuf_iterator<char>()> is an iterator that represents the "end-of-stream" or
// "end-of-file" (EOF) marker. It does not point to any character in the stream. When you
// use it as the second argument in the <assign> function, it indicates the end of the range,
// and the assign function will copy characters from the start iterator (first argument)
// until the end iterator (second argument), which effectively reads the entire content
// of the input stream until the end of the file.
