# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 15:04:18 by ineimatu          #+#    #+#              #
#    Updated: 2025/03/30 15:23:05 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar-brainz!

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

HEAD = Zombie.hpp

SRC = Zombie.cpp main.cpp zombieHord.cpp

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