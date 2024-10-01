# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 16:34:14 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/01 16:32:12 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Target executable
NAME = sed_for_losers

# Source files
SRCS = main.cpp StringReplacer.cpp

# Valgrind flags (you will pass program arguments manually when running the debug rule)
VALGRIND = valgrind --leak-check=full --track-origins=yes --show-reachable=yes

# Compile and link
all: $(NAME)

$(NAME): $(SRCS)
	$(C) $(CFLAGS) $(SRCS) -o $(NAME)

# Debug rule using valgrind (you can pass arguments during execution)
debug: $(NAME)
	$(VALGRIND) ./$(NAME) $(ARGS)

# Clean executable
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re debug