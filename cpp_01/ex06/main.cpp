/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:14:50 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/06 15:32:30 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter \"[DEBUG|INFO|WARNING|ERROR]\"" << std::endl;
		return (1);
	}
	harl.complain(harl.getLevel(argv[1]));
	return (0);
}
