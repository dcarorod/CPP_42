/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:05:33 by dcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/16 14:36:07 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp"

bool	strIsNumeric(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	strIsAlpha(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (!std::isalpha(str[i]))
			return (false);
	}
	return (true);
}

bool	isValidLastName(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if ((!std::isalpha(str[i]) && str[i] != ' ') || (str[i] == ' ' && str[i + 1] == ' '))
			return (false);
	}
	return (true);
}

bool	printMessage(const std::string &str, bool flag)
{
	if (!str.empty())
		std::cout << str << std::endl;
	return (flag);
}
