# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 16:51:54 by tvalimak          #+#    #+#              #
#    Updated: 2024/09/30 15:00:30 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

# Target executable
NAME = harlFilter

# Source files
SRCS = main.cpp Harl.cpp

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