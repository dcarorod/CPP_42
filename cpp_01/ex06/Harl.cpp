/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:13:54 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/06 15:27:25 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "\033[32m[DEBUG]\033[0m I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\033[34m[INFO]\033[0m I cannot believe adding extra bacon cost more money. You don't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\033[33m[WARNING]\033[0m I think I deserve to have some extra bacon for free.\n I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[31m[ERROR]\033[0m This is unacceptable. I want to speak to the manager now." << std::endl;
}

t_level	Harl::getLevel(const std::string &level)
{
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (t_level(i));
	}
	std::cout << "\033[31m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
	return (UNKNOWN);
}

void	Harl::complain(t_level level)
{
	switch (level)
	{
	case DEBUG:
		debug();
		std::cout << std::endl;
		// fall through
	case INFO:
		info();
		std::cout << std::endl;
		// fall through
	case WARNING:
		warning();
		std::cout << std::endl;
		// fall through
	case ERROR:
		error();
		std::cout << std::endl;
		// fall through
	default:
		break;
	}
}
