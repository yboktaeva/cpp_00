# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 16:43:07 by yuboktae          #+#    #+#              #
#    Updated: 2023/10/24 10:16:01 by yuboktae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC	= megaphone.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

OBJ	= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
