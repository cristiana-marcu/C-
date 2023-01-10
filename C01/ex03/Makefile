# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 13:10:29 by cmarcu            #+#    #+#              #
#    Updated: 2023/01/10 18:31:36 by cmarcu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Wextra -Werror
CC		=	c++ -std=c++98

SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ		=	$(SRC:.cpp = .o)
NAME	=	humans
INCLUDES	=	HumanA.hpp HumanB.hpp Weapon.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)