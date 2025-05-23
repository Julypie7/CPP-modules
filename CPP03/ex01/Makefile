# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 20:21:47 by ineimatu          #+#    #+#              #
#    Updated: 2025/05/21 17:12:12 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serena_my_love!

FLAGS = -Wall -Wextra -Werror -std=c++98 

CC = c++

HEAD = ClapTrap.hpp ScavTrap.hpp

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(HEAD) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEAD) Makefile
	$(CC) $(FLAGS) -c $< -o $@

all = $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

