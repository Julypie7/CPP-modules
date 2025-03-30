# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 14:52:26 by ineimatu          #+#    #+#              #
#    Updated: 2025/03/13 12:09:54 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98 

CC = c++

HEAD = Contact.hpp PhoneBook.hpp

SRC = PhoneBook.cpp main.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): Makefile $(HEAD) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEAD)
	$(CC) $(FLAGS) -c $< -o $@

all = $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
