/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:04:29 by amak              #+#    #+#             */
/*   Updated: 2024/05/03 20:07:00 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : writeIndex(0) {}

int	PhoneBook::getIndex() {
	return this->writeIndex;
}

void	PhoneBook:: printContact(std::string index) {
	int	number = atoi(index.c_str()) - 1;
	
	if (((number) < 0) || ((number) > 7))
		std::cout << "Wrong index!" << std::endl;
	else
		this->listContacts[number].printContact();
};

void	PhoneBook::addContact(Contact &contact) {
	if (writeIndex < 8) {
		this->listContacts[writeIndex++] = contact;
	}
	else {
		for (int i = 0; i < 7; i++)
			this->listContacts[i] = listContacts[i + 1]; 
		this->listContacts[7] = contact;
	}
}

void	PhoneBook::promptAdd() {
	Contact newContact;
	std::string first_Name;
	std::string last_Name;
	std::string nick_Name;
	std::string phone_Number;
	std::string darkest_Secret;
	
	std::cout << "Insert first name: ";
	std::getline(std::cin, first_Name);
	std::cout << "Insert last name: ";
	std::getline(std::cin, last_Name);
	std::cout << "Insert nick name: ";
	std::getline(std::cin, nick_Name);
	std::cout << "Insert phone number: ";
	std::getline(std::cin, phone_Number);
	std::cout << "Insert the darkest secret: ";
	std::getline(std::cin, darkest_Secret);
	newContact.setContact(first_Name, last_Name, nick_Name, phone_Number, 
		darkest_Secret);
	addContact(newContact);
}

void	PhoneBook::displayList() {
	std::cout << "----------+----------+----------+----------" << std::endl;
	std::cout << "Index Slot|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "----------+----------+----------+----------" << std::endl;
	for (int i = 0; i <= 7; i++) {
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		listContacts[i].printHeader();
	}
	std::cout << std::endl;
}

void	printMainMenu() {
	std::cout << "+---------+----------+----------+---------+" << std::endl;
	std::cout << "|         ..:: PHONE BOOK ex01 ::..       |" << std::endl;
	std::cout << "+---------+----------+----------+---------+" << std::endl;
	std::cout << std::endl;
	std::cout << "MENU: " << std::endl;
	std::cout << "ADD - Add a contact" << std::endl;
	std::cout << "SEARCH - Search a contact and view information" << std::endl;
	std::cout << "EXIT - Exit program" << std::endl;
	std::cout << std::endl;
}
