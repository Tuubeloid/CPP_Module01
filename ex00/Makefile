# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 13:42:06 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/01 16:10:37 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)
NAME = zombie_out
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

# Valgrind flags
VALGRIND = valgrind --leak-check=full --track-origins=yes --show-reachable=yes

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Debug rule using valgrind
debug: $(NAME)
	$(VALGRIND) ./$(NAME)

.PHONY: all clean fclean re debug