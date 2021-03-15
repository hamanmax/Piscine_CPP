# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 12:26:09 by mhaman            #+#    #+#              #
#    Updated: 2021/03/15 12:40:55 by mhaman           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC		=	megaphone.cpp\

OBJ		=	${SRC:.cpp=.o}

FLAG	=	-Wall -Wextra -Werror

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

