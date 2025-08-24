/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:54:31 by abenajib          #+#    #+#             */
/*   Updated: 2025/08/24 23:24:30 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::endl;
	std::cout << "The memory address of the string var: " << &str << std::endl;
	std::cout << "The value of the string var: " << str << std::endl;
	std::cout << std::endl;

	std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << stringPTR << std::endl;
	std::cout << std::endl;

	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	std::cout << std::endl;

    return 0;
}
