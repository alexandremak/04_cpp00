/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:59:03 by amak              #+#    #+#             */
/*   Updated: 2024/04/29 16:14:10 by amak             ###   ########.fr       */
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
		myPhoneBook.mainMenu();
		std::cout << "Insert option: ";
		std::getline(std::cin, optionSelect);
		std::cout << std::endl;
		if (optionSelect == "ADD")
			myPhoneBook.promptAdd();
		else if (optionSelect == "SEARCH")
		{
			myPhoneBook.displayList();
			if (myPhoneBook.getIndex()) {
				std::cout << "Insert index: " << std::endl;
				std::getline(std::cin, index);
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
