# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 17:48:53 by mhaman            #+#    #+#              #
#    Updated: 2021/03/15 17:57:54 by mhaman           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC		=	Contact.class.cpp\
			PhoneBook.cpp 

OBJ		=	${SRC:.cpp=.o}

FLAG	=	-Wall -Wextra -Werror

NAME	=	PhoneBook

CC		=	clang++

all: $(OBJ) $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.cpp: %.o	
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean;
	rm -rf $(NAME)

re: fclean all

