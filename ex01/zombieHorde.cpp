/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:59:12 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 23:06:36 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	// if there is no zombies to allocate return NULL
	if (N <= 0)
		return (NULL);
	// allocate a table of N zombies
	Zombie* newZombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newZombieHorde[i].setName(name); // iterate through all the zombies and set the names
	return (newZombieHorde);
}
