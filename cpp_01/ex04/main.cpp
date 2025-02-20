/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:03:50 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/06 14:03:37 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string	getFileContent(const std::string& filename)
{
	std::string	content;
	std::string	line;
	std::ifstream inputFile;

	inputFile.open(filename.c_str());
	if (!inputFile)
		throw std::runtime_error("Error: could not open file " + filename);
	while (std::getline(inputFile, line))
		content += line + '\n';
	inputFile.close();
	return (content);
}

std::string replaceOccurrences(const std::string& content, const std::string& s1,
	const std::string& s2)
{
	std::string newContent = content;
	size_t pos = 0;

	if (s1.empty())
		throw std::invalid_argument("Error: string to replace is empty.");
	if (content.empty())
		throw std::runtime_error("Error: file content is empty. Nothing to replace.");
	while ((pos = newContent.find(s1, pos)) != std::string::npos)
	{
		newContent.erase(pos, s1.length());
		newContent.insert(pos, s2);
		pos += s2.length();
	}
	return (newContent);
}

void	writeToFile(const std::string& filename, const std::string& content)
{
	std::ofstream outputFile(filename.c_str());
	if (!outputFile)
		throw std::runtime_error("Error: could not create file " + filename);
	outputFile << content;
	outputFile.close();
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> [string1] [string2]";
		return (1);
	}
	try
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string content = getFileContent(filename);
		std::string modifiedContent = replaceOccurrences(content, s1, s2);
		writeToFile(filename + ".replace", modifiedContent);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
