/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:57 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/24 11:25:53 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

public:
    Contact(void);
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
    ~Contact(void);
    
    void print_phonebook(void) const;
    void print_contact(void) const;
    
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif