# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/13 12:16:13 by ineimatu          #+#    #+#              #
#    Updated: 2025/04/13 12:16:57 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

HEAD = 

SRC = main.cpp

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