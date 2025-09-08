/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:08:22 by abenajib          #+#    #+#             */
/*   Updated: 2025/09/08 15:09:50 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
  public:
	Harl();
	void complain( std::string level );
	~Harl();

  private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif // HARL_HPP

