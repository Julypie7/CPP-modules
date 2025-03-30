# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 16:03:16 by ineimatu          #+#    #+#              #
#    Updated: 2025/03/30 16:04:20 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN!

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): MAkefile $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		
%o.:%.cpp 
	$(CC) $(FLAGS) ßc $< -o $@

all = $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

.PHONY: all re clean fclean