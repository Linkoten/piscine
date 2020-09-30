# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 16:20:43 by pbrochar          #+#    #+#              #
#    Updated: 2020/09/30 22:49:51 by pbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = $(addprefix srcs/, ${SRCS:.c=.o})

FLAGS = -Wall -Wextra -Werror

.c.o :
	gcc $(FLAGS) -c -I./includes  $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	ar -crs $@ $^

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
