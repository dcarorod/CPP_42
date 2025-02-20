/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:16:05 by dcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/19 13:57:20 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), index(0) {}

PhoneBook::~PhoneBook() {}

std::string trimString(const std::string &str, const std::string &set)
{
	size_t start;
	size_t end;

	if (str.empty())
		return "";
	if (set.empty() && !str.empty())
		return str;
	start = 0;
	while (start < str.size() && set.find(str[start]) != std::string::npos)
	{
		start++;
	}
	end = str.size();
	while (end > start && set.find(str[end - 1]) != std::string::npos)
	{
		end--;
	}
	return str.substr(start, end - start);
}

void PhoneBook::getInput(const std::string &prompt, t_field field, Contact &contact)
{
	std::string	input;
	std::string	trimmed;

	std::cout << prompt;
	std::getline(std::cin, input);
	trimmed = trimString(input, " \t");
	while (!contact.setField(field, trimmed))
	{
		std::cout << "Invalid input. " << prompt;
		std::getline(std::cin, input);
		trimmed = trimString(input, " \t");
	}
}

void	PhoneBook::addContact()
{
	Contact	newContact;

	getInput("Enter First Name: ", FIRST_NAME, newContact);
	getInput("Enter Last Name: ", LAST_NAME, newContact);
	getInput("Enter Nickname: ", NICKNAME, newContact);
	getInput("Enter Phone Number: ", PHONE, newContact);
	getInput("Enter Darkest Secret: ", SECRET, newContact);
	std::cout << "Contact added successfully!\n\n";

	if (count < MAX_CONTACTS)
	{
		contacts[count] = newContact;
		count++;
	}
	else
	{
		contacts[index] = newContact;
		index = (index + 1) % MAX_CONTACTS;
	}
}

std::string	PhoneBook::truncate(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::displayContacts()
{
	if (count == 0)
		return ;
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	//std::cout << "---------------------------------------------" << std::endl;

	for (unsigned int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|"
					<< std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
					<< std::setw(10) << truncate(contacts[i].getLastName()) << "|"
					<< std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::searchContact()
{
	unsigned int index;
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	displayContacts();
	std::cout << "Enter the index of the contact you want to display [0-7]: ";
	std::cin >> index;
	if (std::cin.fail() || index >= count)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index. Search aborted !" << std::endl;
		return ;
	}
	std::cin.ignore();
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getSecret() << std::endl;
	std::cout << std::endl;
}
