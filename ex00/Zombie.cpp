/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:15 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 16:54:19 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie constructed" << std::endl;
}

Zombie::Zombie(const Zombie &other) {
	std::cout << "Zombie copied" << std::endl;
	*this = other;
}

Zombie &Zombie::operator=(const Zombie &other) {
	std::cout << "Zombie assigned" << std::endl;
	if (this != &other) {
		// Copy fields here
	}
	return *this;
}

Zombie::~Zombie() {
	std::cout << "Zombie destroyed" << std::endl;
}
