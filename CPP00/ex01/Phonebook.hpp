/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:37:10 by onevil_x          #+#    #+#             */
/*   Updated: 2025/08/21 04:21:42 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iostream>
#include <iomanip>
#include <cstdlib>

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;

public:
    PhoneBook();

    void addContact();
    void searchContact() const;
};

#endif
