/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:59:03 by amak              #+#    #+#             */
/*   Updated: 2024/05/09 18:23:05 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	myPhoneBook;
	std::string	optionSelect = "none";
	std::string index;
	
	while (true)
	{
		printMainMenu();
		std::cout << "Insert option: ";
		std::getline(std::cin, optionSelect);
		std::cout << std::endl;
		if (optionSelect == "ADD")
			myPhoneBook.promptAdd();
		else if (optionSelect == "SEARCH")
		{
			myPhoneBook.displayList();
			if (myPhoneBook.getIndex()) {
				std::cout << "Insert index <1-8>: ";
				std::getline(std::cin, index);
				std::cout << std::endl;
				myPhoneBook.printContact(index);
			}
		}
		else if (optionSelect == "EXIT")
			break;
		else
			std::cout << "Invalid option!" << std::endl;
		std::cout << std::endl;
	}
}
