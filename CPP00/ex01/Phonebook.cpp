/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:15:44 by onevil_x          #+#    #+#             */
/*   Updated: 2025/07/19 00:29:19 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
    Contact newContact;
    std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);
	
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter Phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);
	
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);
	
	contacts[contactCount % 8] = newContact;
	contactCount++;
	std::cout << "Contact added successfully!" << std::endl;
}

static std::string formatField(const std::string &str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else if (str.length() < 10)
		return std::string(10 - str.length(), ' ') + str;
	return str;
}

void PhoneBook::searchContact() const {
	if (contactCount == 0) 
	{
		std::cout << "No Contacts in the PhoneBook" << std::endl;
		return ;
	}

	std::cout << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname" << std::endl;

	int i = 0;
	while (i < std::min(contactCount, 8))
	{
		std::cout << std::setw(10) << i
				  << "|" << std::setw(10) << formatField(contacts[i].getFirstName())
				  << "|" << std::setw(10) << formatField(contacts[i].getLastName())
				  << "|" << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
				i++;
	}

	std::cout << "Enter index to view Details: ";
	int index;
	std::cin >> index;
	std::cin.ignore();

	if (index < 0 || index >= std::min(contactCount, 8))
	{
		std::cout << "this is Invalid index." << std::endl;
		return ;	
	}

	const Contact& c = contacts[index];
	std::cout << "First Name: " << c.getFirstName() << std::endl;
	std::cout << "Last Name: " << c.getLastName() << std::endl;
	std::cout << "Nickname: " << c.getNickname() << std::endl;
	std::cout << "Phone Number: " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
}
