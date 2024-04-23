/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:49:54 by amak              #+#    #+#             */
/*   Updated: 2024/04/23 20:34:02 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook{
	private:
		Contact	listContacts[8];
		int	writeIndex;

	public:
		PhoneBook();
		void addContact(Contact &contact);
		void displayList();
};

#endif
