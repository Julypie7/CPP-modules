# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 13:57:22 by ineimatu          #+#    #+#              #
#    Updated: 2025/05/23 10:17:33 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract_class

FLAGS = -Wall -Wextra -Werror -std=c++98 

CC = c++

HEAD = Animal.hpp Brain.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp 

SRC = Animal.cpp Brain.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp 

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