/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:31 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 17:26:17 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("Z0");

    std::cout << std::endl;

    Zombie*	zombie = newZombie("Z1");
    zombie->announce();
    delete zombie;

    std::cout << std::endl;

    randomChump("Z2");
}
