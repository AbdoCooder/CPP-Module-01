/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:12:12 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/25 20:01:30 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& Type) : type(Type) {}

const std::string& Weapon::getType(void) const { return type; }

void Weapon::setType(const std::string& newType) { type = newType; }

Weapon::~Weapon() {}
