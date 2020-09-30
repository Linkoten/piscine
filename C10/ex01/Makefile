# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 17:59:39 by pbrochar          #+#    #+#              #
#    Updated: 2020/09/29 18:01:21 by pbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = ft_check_error.c ft_display.c ft_str_fct.c main.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o :
	gcc $(FLAGS) -c -I ft_cat.h $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ) ft_cat.h.gch

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
