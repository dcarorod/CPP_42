/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:05:38 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/06 15:08:42 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");

	std::cout << std::endl;
	harl.complain("INFO");

	std::cout << std::endl;
	harl.complain("WARNING");

	std::cout << std::endl;
	harl.complain("ERROR");

	std::cout << std::endl;
	harl.complain("BLA");
	return (0);
}
