/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:48:20 by amak              #+#    #+#             */
/*   Updated: 2024/04/16 23:32:52 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main (int argv, char **argc)
{
	if (argv == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for(int i = 1; i < argv; i++) {
			for (int j = 0; argc[i][j]; j++)
				std::cout << (char)std::toupper(argc[i][j]);
		}
	}
	std::cout << std::endl;
}
