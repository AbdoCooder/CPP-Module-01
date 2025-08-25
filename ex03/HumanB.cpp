/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:13:52 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/25 20:15:38 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( const std::string& name ) : weapon(NULL), name(name) { }

void HumanB::attack( void )
{
	if (weapon)
		std::cout << name << " Attack with " << weapon->getType() << std::endl;
	else
		std::cout << "No weapon sets for" << name << std::endl;
}

void HumanB::setWeapon( Weapon& newWeapon )
{
	this->weapon = &newWeapon;
}

HumanB::~HumanB() { }
