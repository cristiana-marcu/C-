# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 13:10:29 by cmarcu            #+#    #+#              #
#    Updated: 2023/01/10 18:33:04 by cmarcu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Wextra -Werror
CC		=	c++ -std=c++98

SRC		=	main.cpp Harl.cpp
OBJ		=	$(SRC:.cpp = .o)
NAME	=	harlFilter
INCLUDES	=	Harl.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)