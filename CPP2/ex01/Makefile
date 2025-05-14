# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 20:08:45 by ineimatu          #+#    #+#              #
#    Updated: 2025/05/07 20:09:09 by ineimatu         ###   ########.fr        #
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
