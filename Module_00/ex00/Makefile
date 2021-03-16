# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 12:26:09 by mhaman            #+#    #+#              #
#    Updated: 2021/03/16 10:06:24 by mhaman           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC		=	megaphone.cpp\

OBJ		=	${SRC:.cpp=.o}

FLAG	=	-Wall -Werror -Wextra -std=c++98

NAME	=	megaphone

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

