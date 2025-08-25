/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:12:09 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/25 17:02:33 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  public:
  	Weapon( const std::string& Type );
  	const	std::string&	getType( void )			 		const;
  			void			setType( const std::string& newType );
  	~Weapon();

  private:
	std::string type;
};

#endif // WEAPON_HPP
