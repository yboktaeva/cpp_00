/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:16:46 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/23 11:45:17 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {

public:
    PhoneBook();
    ~PhoneBook();
    
    void add_contact(void);
    void print_contact(void) const;
    void search_contact(void) const;

private:
    Contact _contacts[8];
};

#endif
