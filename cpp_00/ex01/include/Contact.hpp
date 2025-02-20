/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:02:24 by dcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/19 13:48:07 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define ERROR_FIRST_NAME "First Name must contain only alphabetic characters and up to 50 characters"

typedef enum e_field
{
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE,
	SECRET
}	t_field;

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

public:
	Contact();
	~Contact();

	bool	setField(t_field field, std::string &value);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getSecret();
};

bool	strIsNumeric(std::string &str);
bool	strIsAlpha(std::string &str);
bool	isValidLastName(std::string &str);
bool	printMessage(const std::string &str, bool flag);

#endif
