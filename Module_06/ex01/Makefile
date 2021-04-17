SRC		=	main.cpp\

OBJ		=	${SRC:.cpp=.o}

FLAG	=	-Wall -Werror -Wextra -std=c++98

NAME	=	serialize

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
