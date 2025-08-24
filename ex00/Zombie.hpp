/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:06 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 17:22:23 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  public:
	void announce( void );
	void setName( std::string name );
	~Zombie();

  private:
	std::string name;
};

Zombie*	newZombie(std::string name);
void    randomChump(std::string name);

#endif // ZOMBIE_HPP
