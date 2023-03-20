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
#include "colors.h"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 3)
	{
		std::cout << RED "Usage: ./ircserv <listening_port> <password>" RESET << std::endl;
		return (1);
	}
	return 0;
}
