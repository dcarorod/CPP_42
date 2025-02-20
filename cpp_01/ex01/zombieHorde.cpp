/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:39:42 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/07 14:17:08 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0 || N > INT_MAX)
		return (NULL);
	Zombie* horde = NULL;
	try
	{
		horde = new Zombie[N];
	}
	catch(const std::bad_alloc&)
	{
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

/* Creates a zombie horde.
nothrow is used to prevent exceptions and return NULL
if allocation fails */
// Zombie*	zombieHorde(int N, std::string name)
// {
// 	if (N <= 0)
// 		return (NULL);
// 	Zombie* horde = new (std::nothrow) Zombie[N];
// 	if (!horde)
// 		return (NULL);
// 	for (int i = 0; i < N; i++)
// 		horde[i].setName(name);
// 	return (horde);
// }
