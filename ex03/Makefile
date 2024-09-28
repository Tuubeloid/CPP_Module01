# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 16:20:09 by tvalimak          #+#    #+#              #
#    Updated: 2024/09/28 16:20:29 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Target executable
NAME = violence

# Source files
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

# Compile and link
all: $(NAME)

$(NAME): $(SRCS)
	$(C) $(CFLAGS) $(SRCS) -o $(NAME)

# Clean executable
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re