/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:44 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/24 09:54:05 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret){
    _first_name = first_name;
    _last_name = last_name;
    _nickname = nickname;
    _phone_number = phone_number;
    _darkest_secret = darkest_secret;
}

Contact::~Contact(void) {
}

void Contact::print_phonebook(void) const {

    std::string first_name = this->_first_name;
    std::string last_name = this->_last_name;
    std::string nickname = this->_nickname;
    if (first_name.length() > 10)
        first_name = first_name.substr(0, 9) + ".";
    if (last_name.length() > 10)
        last_name = last_name.substr(0, 9) + ".";
    if (nickname.length() > 10)
        nickname = nickname.substr(0, 9) + ".";
    std::cout << std::setw(10) << std::right << first_name << "|";
    std::cout << std::setw(10) << std::right << last_name << "|";
    std::cout << std::setw(10) << std::right << nickname << std::endl;
}

void Contact::print_contact(void) const {
    
    std::cout << "##################################" << std::endl;
    std::cout << "First Name: " << this->_first_name << std::endl;
    std::cout << "Last Name: " << this->_last_name << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone number: " << this->_phone_number << std::endl;
    std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
    std::cout << "##################################" << std::endl;
}