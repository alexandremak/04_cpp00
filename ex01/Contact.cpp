/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:55:49 by amak              #+#    #+#             */
/*   Updated: 2024/04/23 21:13:23 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setContact(std::string first, std::string last, std::string nick,
			std::string phone, std::string secret) {
	this->firstName = first;
	this->lastName = last;
	this->nickName = nick;
	this->phoneNumber = phone;
	this->darkestSecret = secret;
}

std::string Contact::truncString(const std::string &input) {
	if (input.size() > 10)
		return input.substr(0, 9) + ".";
	else
		return input;
}

void Contact::printHeader() {
	std::cout << std::right << std::setw(10) << truncString(firstName) << "|";
	std::cout << std::right << std::setw(10) << truncString(lastName) << "|";
	std::cout << std::right << std::setw(10) << truncString(nickName) << "|" 
		<< std::endl;
}

void Contact::printContact() {
	std::cout << std::right << std::setw(16) << "First Name: " << firstName 
		<< std::endl;
	std::cout << std::right << std::setw(16) << "Last Name: " << lastName 
		<< std::endl;
	std::cout << std::right << std::setw(16) << "Nickname: " << nickName 
		<< std::endl;
	std::cout << std::right << std::setw(16) << "Phone Number: " << phoneNumber 
		<< std::endl;
	std::cout << std::right << std::setw(16) << "Darkest Secret: " << darkestSecret 
		<< std::endl;
}
