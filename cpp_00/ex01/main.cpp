/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:15:10 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/24 09:58:56 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool is_valid(std::string option) {

    if (!option.compare("ADD") || !option.compare("SEARCH") || !option.compare("EXIT"))
        return true;
    else
        return false;
}

void prompt_option(std::string &option) {

    std::cout << "Please choose one of this options:" << std::endl;
    std::cout << "ADD, SEARCH, EXIT" << std::endl;
    while (!is_valid(option)) {

        std::cout << "> ";
        if (!(std::cin >> option) || std::cin.eof()) {

            std::cin.clear();
            option = "EXIT";
            break ;
        }
    }
}

int main(void) {

    PhoneBook book;
    std::cout << "******** My Phonebook ********" << std::endl;
    std::string option;
    
    while (1) {

        option.clear();
        prompt_option(option);
        if (!option.compare("ADD"))
            book.add_contact();
        else if (!option.compare("SEARCH"))
            book.search_contact();
        else if (!option.compare("EXIT"))
            break;
    }
    return 0;
}