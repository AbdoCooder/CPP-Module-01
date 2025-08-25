/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:13:12 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/25 19:47:48 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
  public:
	HumanA( const std::string& name, Weapon& w );
	void attack( void );
	~HumanA();

  private:
	Weapon& weapon;
	std::string name;
};

#endif // HUMANA_HPP
