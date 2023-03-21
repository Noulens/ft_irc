/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:36:38 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/20 16:36:43 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "colors.h"
#include "Server.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	try
	{
		if (argc != 3)
			throw std::runtime_error("Usage: ./ircserv <listening_port> <password>");
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
		return (1);
	}
	return 0;
}
