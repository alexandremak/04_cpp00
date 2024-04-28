/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:49:54 by amak              #+#    #+#             */
/*   Updated: 2024/04/28 18:45:59 by amak             ###   ########.fr       */
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
		int		writeIndex;
		
		void 	addContact(Contact &contact);

	public:
		PhoneBook();
		int		getIndex();
		void	printContact(std::string index);
		void 	promptAdd();
		void 	displayList();	
		void 	mainMenu();
};

#endif
