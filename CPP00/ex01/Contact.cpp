/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 01:22:18 by onevil_x          #+#    #+#             */
/*   Updated: 2025/07/18 02:56:26 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& str) { firstName = str; }
void Contact::setLastName(const std::string& str) { lastName = str; }
void Contact::setNickname(const std::string& str) { nickname = str; }
void Contact::setPhoneNumber(const std::string& str) { phoneNumber = str; }
void Contact::setDarkestSecret(const std::string& str) { darkestSecret = str; }

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }
