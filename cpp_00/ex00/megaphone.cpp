/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:41:08 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/24 10:36:57 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

/*Function to convert a srting to uppercase*/
void    upper_case(char *str) {

    int len = std::strlen(str);
        
    for (int i = 0; i < len; i++)
        str[i] = std::toupper(str[i]);
}

/*Function to remove leading and trailing spaces from a string*/
char    *print_str(char *str) {

    int start = 0;
    
    while (std::isspace(str[start]))
        start++;
    int end = std::strlen(str) - 1;
    while (std::isspace(str[end]))
        str[end--] = '\0';
    return str + start;
}

int main(int argc, char **argv) {

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++) {

        upper_case(argv[i]);
        std::cout << print_str(argv[i]);
        if (i != argc - 1)
            std::cout << " ";
    }
    std::cout << "\n";
    return 0;
}