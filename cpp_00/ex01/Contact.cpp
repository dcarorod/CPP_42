/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:04:10 by dcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/19 14:09:09 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

// Setters
bool	Contact::setField(t_field field, std::string &value)
{
	if (value.empty())
		return (false);
	if (field != PHONE && value.length() > 50)
		return (printMessage("Error: Input exceeds the 50-character limit.", false));
	if (field == FIRST_NAME)
	{
		if (!strIsAlpha(value))
			return (printMessage("Error: Only alphabetic characters are accepted", false));
		this->firstName = value;
	}
	else if (field == LAST_NAME)
	{
		if (!isValidLastName(value))
			return (printMessage("Error: Only alphabetic characters and no consecutive spaces are allowed", false));
		this->lastName = value;
	}
	else if (field == NICKNAME)
		this->nickname = value;
	else if (field == PHONE)
	{
		if (!strIsNumeric(value))
			return (printMessage("Phone number must must be a positive integer.", false));
		if (value.length() != 3 && value.length() != 10)
			return (printMessage("Phone number must have 3 or 10 digits.", false));
		this->phone = value;
	}
	else if (field == SECRET)
		this->secret = value;
	else
		return (false);
	return (true);
}


// Getters
std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phone);
}

std::string	Contact::getSecret()
{
	return (this->secret);
}
