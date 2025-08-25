/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:13:46 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/25 19:58:23 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
#include "Weapon.hpp"

class HumanB
{
  public:
	HumanB( const std::string& name );
	void attack( void );
	void setWeapon( Weapon& newWeapon );
	~HumanB();

  private:
	Weapon *weapon;
	std::string name;
};

#endif // HUMANB_HPP
