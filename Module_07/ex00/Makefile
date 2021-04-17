# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 18:16:22 by mhaman            #+#    #+#              #
#    Updated: 2021/04/17 17:10:02 by mhaman           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


SRC		=	main.cpp\

OBJ		=	${SRC:.cpp=.o}

FLAG	=	-Wall -Werror -Wextra -std=c++98

NAME	=	Whatever

CC		=	clang++


all: $(OBJ) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

$(OBJ)%.o: $(SRC)%.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean;
	rm -rf $(NAME)

re: fclean all

