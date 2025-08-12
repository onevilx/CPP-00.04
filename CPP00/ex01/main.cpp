/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 02:09:17 by onevil_x          #+#    #+#             */
/*   Updated: 2025/08/12 01:57:22 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string cmd;

    std::cout << "Welcome to PhoneBook!" << std::endl;
    while (1)
    {
        std::cout << "___________________________________\n";
        std::cout << "Enter a command {ADD, SEARCH, EXIT}" << std::endl;
        std::getline(std::cin, cmd);

        if (std::cin.eof())
            return 0;
        if (cmd == "ADD")
        phoneBook.addContact();
        else if (cmd == "SEARCH")
        phoneBook.searchContact();
        else if (cmd == "EXIT")
        break;
        else
        std::cout << "Invalid command. Try again !" << std::endl;
    }
    return 0;
}