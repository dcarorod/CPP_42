/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:23:10 by dcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/16 14:37:24 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	std::cout << "Welcome to the PhoneBook!\n\n";
	std::cout << "Available commands: ADD, SEARCH, EXIT\n";

	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << std::endl;
		if (std::cin.eof())
		{
			std::cout << "End of input detected. Exiting...\n";
			break;
		}
	}
	return (0);
}
