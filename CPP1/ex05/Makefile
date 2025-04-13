# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/13 15:40:38 by ineimatu          #+#    #+#              #
#    Updated: 2025/04/13 16:42:14 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl2.0

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

HEAD = Harl.hpp

SRC = Harl.cpp main.cpp

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