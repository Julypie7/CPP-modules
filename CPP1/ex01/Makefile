# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 15:04:18 by ineimatu          #+#    #+#              #
#    Updated: 2025/04/13 11:52:07 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz!

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

HEAD = Zombie.hpp

SRC = Zombie.cpp main.cpp zombieHord.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): Makefile $(HEAD) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		
%o.:%.cpp $(HEAD)
	$(CC) $(FLAGS) -c $< -o $@

all = $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean