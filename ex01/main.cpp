/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:31 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 23:11:15 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie* zombiehord = zombieHorde(N, "Znames");
    for (int i = 0; i < N; i++)
		zombiehord[i].announce();
    std::cout << std::endl;
    delete[] zombiehord;
}
