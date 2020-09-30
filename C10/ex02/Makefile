# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 20:29:33 by pbrochar          #+#    #+#              #
#    Updated: 2020/09/29 20:30:47 by pbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRCS = main.c ft_atoi.c ft_gest_error.c ft_str_fct.c ft_tail.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o :
	gcc $(FLAGS) -c -I ft_htail.h $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ) ft_htail.h.gch

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
