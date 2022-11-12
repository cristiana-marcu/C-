# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 14:56:39 by cmarcu            #+#    #+#              #
#    Updated: 2022/11/12 14:58:04 by cmarcu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Wextra -Werror
CC		=	c++

SRC		=	Contact.cpp PhoneBook.cpp main.cpp
OBJ		=	$(SRC:.cpp = .o)
NAME	=	volatile_agenda

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

