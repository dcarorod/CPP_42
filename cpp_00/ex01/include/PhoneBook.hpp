/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:03:43 by dcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/26 14:08:11 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

class PhoneBook
{
private:
	Contact			contacts[MAX_CONTACTS];
	unsigned int	count;
	unsigned int	index;
	void			getInput(const std::string &prompt, t_field field, Contact &contact);
	std::string		truncate(const std::string &str);

public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	searchContact();
	void	displayContacts();
};

#endif
