/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:04:29 by amak              #+#    #+#             */
/*   Updated: 2024/04/23 21:17:27 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : writeIndex(0) {}

void PhoneBook::addContact(Contact &contact) {
	if (writeIndex < 8) {
		this->listContacts[writeIndex++] = contact;
	}
	else {
		for (int i = 0; i < 7; i++)
			this->listContacts[i] = listContacts[i + 1]; 
		this->listContacts[7] = contact;
	}
}

void PhoneBook::displayList() {
	std::cout << "----------+----------+----------+----------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "----------+----------+----------+----------" << std::endl;
	for (int i = 0; i <= writeIndex; i++) {
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		listContacts[i].printHeader();
	}
}
