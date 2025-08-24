/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:06 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 16:54:10 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  public:
	Zombie();
	Zombie(const Zombie &other);
	Zombie &operator=(const Zombie &other);
	~Zombie();

  private:
	// Add members here
};

#endif // ZOMBIE_HPP
