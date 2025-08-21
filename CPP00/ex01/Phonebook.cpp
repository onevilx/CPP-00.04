/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:15:44 by onevil_x          #+#    #+#             */
/*   Updated: 2025/08/21 04:20:22 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() 
{
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    if (!std::getline(std::cin, input))
    {
        std::cout << "\nInput aborted.\n";
        std::cin.clear();
        exit(0);
    }
    newContact.setFirstName(input);
	if (input.empty())
    {
        std::cout << "You can't add an empty contact. Try again!\n";
        return;
    }

    std::cout << "Enter last name: ";
    if (!std::getline(std::cin, input))
    {
        std::cout << "\nInput aborted.\n";
        std::cin.clear();
         exit(0);
    }
    newContact.setLastName(input);
    if (input.empty())
    {
        std::cout << "You can't add an empty contact. Try again!\n";
        return;
    }

    std::cout << "Enter nickname: ";
    if (!std::getline(std::cin, input))
    {
        std::cout << "\nInput aborted.\n";
        std::cin.clear();
         exit(0);
    }
    newContact.setNickname(input);
	if (input.empty())
    {
        std::cout << "You can't add an empty contact. Try again!\n";
        return;
    }
	
    std::cout << "Enter phone number: ";
    if (!std::getline(std::cin, input))
    {
        std::cout << "\nInput aborted.\n";
        std::cin.clear();
         exit(0);
    }
    newContact.setPhoneNumber(input);
    if (input.empty())
    {
        std::cout << "You can't add an empty contact. Try again!\n";
        return;
    }

    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, input))
    {
        std::cout << "\nInput aborted.\n";
        std::cin.clear();
        exit(0);
    }
    newContact.setDarkestSecret(input);
    if (input.empty())
    {
        std::cout << "You can't add an empty contact. Try again!\n";
        return;
    }

    contacts[contactCount % 8] = newContact;
    contactCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

static std::string formatField(const std::string &str) 
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else if (str.length() < 10)
		return std::string(10 - str.length(), ' ') + str;
	return str;
}

void PhoneBook::searchContact() const 
{	
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

	int index;
    while (true)
    {
        std::cout << "Enter index to view Details: ";
        std::cin >> index;

        if (std::cin.eof())
        {
            std::cout << "\nInput aborted. You pressed CTRL-D!\n";
            std::cin.clear();
            std::string dummy;
            std::getline(std::cin, dummy);
            exit(0);
        }

        if (std::cin.fail())
        {
            std::cin.clear();
            std::string dummy;
            std::getline(std::cin, dummy);
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        
		std::cin.ignore(10000, '\n');
        if (index < 0 || index >= std::min(contactCount, 8))
        {
            std::cout << "This is an invalid index. Try again.\n";
            continue;
        }
        break;
    }

	const Contact& c = contacts[index];
	std::cout << "First Name: " << c.getFirstName() << std::endl;
	std::cout << "Last Name: " << c.getLastName() << std::endl;
	std::cout << "Nickname: " << c.getNickname() << std::endl;
	std::cout << "Phone Number: " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
}
