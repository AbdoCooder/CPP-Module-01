/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:13:19 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/25 17:41:06 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( const std::string& name, Weapon& w ) : weapon(w), name(name) { }

void HumanA::attack( void )
{
	std::cout << name << " Attack with " << weapon.getType() << std::endl;
}

HumanA::~HumanA() { }
