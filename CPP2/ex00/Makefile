# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 20:17:03 by ineimatu          #+#    #+#              #
#    Updated: 2025/04/26 20:58:45 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp Fixed.cpp

HEAD = Fixed.hpp

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