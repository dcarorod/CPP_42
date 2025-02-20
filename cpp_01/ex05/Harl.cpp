/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:05:01 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/07 15:09:08 by dcaro-ro         ###   ########.fr       */
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
	std::cout << "\033[33m[WARNING]\033[0m I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[31m[ERROR]\033[0m This is unacceptable. I want to speak to the manager now." << std::endl;
}

/*
	Defines an array of string representing each level.
	Defines an array of function pointers to member functions of Harl.
	Iterates through the levels array to find a match with the input level
	and call the corresponding function if a match was found.
	Exit the function after handling the complaint.
	Print an error message if no match is found.
*/
void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	funcPTR	functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			funcPTR func = functions[i];
			(this->*func)();
			return ;
		}
	}
	std::cout << "\033[31mInvalid level\033[0m" << std::endl;
}
