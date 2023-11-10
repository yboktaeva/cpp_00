/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:16:13 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/24 09:53:53 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <climits>

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::add_contact(void) {
    
    static int i;
    
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First name:" << std::endl;
    while (first_name.empty())
        std::cin >> first_name;
    std::cout << "Last name:" << std::endl;
    while (last_name.empty())
        std::cin >> last_name;
    std::cout << "Nickname:" << std::endl;
    while (nickname.empty())
        std::cin >> nickname;
    std::cout << "Phone number:" << std::endl;
    while (phone_number.empty())
        std::cin >> phone_number;
    std::cout << "Darkest secret:" << std::endl;
    while (darkest_secret.empty())
        std::cin >> darkest_secret;
    Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
    this->_contacts[i] = contact;
    i++;
    if (i == 8)
        i = 0;
}

void PhoneBook::search_contact(void) const {
    
    this->print_contact();
    std::cout << "Please type the index of the contact" << std::endl;
    std::cout << "> ";
    int input;
    std::cin >> input;
    if (std::cin.fail() || input >= 8 || input < 0) {
    
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        if (input >= 8 || input < 0)
            std::cout << "Invalid index. There are only 8 contacts maximum. Please type index between 0 and 7" << std::endl;
        else 
            std::cout << "Invalid index. It must contain only digits" << std::endl;
        return ;
    }
    this->_contacts[input].print_contact();
}

void PhoneBook::print_contact(void) const {

    int i = 0;

    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
    while (i < 8) {
    
        std::cout << std::setw(10) << std::right << i << "|";
        this->_contacts[i].print_phonebook();
        i++;
    }
}
