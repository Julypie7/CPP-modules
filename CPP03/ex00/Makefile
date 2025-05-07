# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 20:21:47 by ineimatu          #+#    #+#              #
#    Updated: 2025/05/06 20:23:04 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AaaaaaaandOpen!

FLAGS = -Wall -Wextra -Werror -std=c++98 

CC = c++

HEAD = ClapTrap.hpp

SRC = ClapTrap.cpp main.cpp

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

