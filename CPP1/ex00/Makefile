# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 14:24:06 by ineimatu          #+#    #+#              #
#    Updated: 2025/03/30 15:17:44 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

HEAD = Zombie.hpp

SRC = Zombie.cpp main.cpp newZombie.cpp randomChamp.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): MAkefile $(HEAD) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		
%o.:%.cpp $(HEAD)
	$(CC) $(FLAGS) ßc $< -o $@

all = $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

.PHONY: all re clean fclean