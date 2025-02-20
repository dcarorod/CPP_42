/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:40:12 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/07 14:19:11 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;
	int	N = 10;

	horde = zombieHorde(N, "Hungry Zombie");
	if (!horde)
	{
		std::cerr << "Error: Memory allocation failed." << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
	{
		std::cout << "[Zombie " << i + 1 << "] ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
