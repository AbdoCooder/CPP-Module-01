/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:31 by abenajib          #+#    #+#             */
/*   Updated: 2025/09/08 15:54:16 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl obj;
	obj.complain("DEBUG");
	obj.complain("INFO");
	obj.complain("WARNING");
	obj.complain("ERROR");
	return 0;
}
