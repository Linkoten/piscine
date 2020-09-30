# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/30 17:17:59 by pbrochar          #+#    #+#              #
#    Updated: 2020/09/30 19:28:50 by pbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

SRCS = main.c ft_files.c ft_check_error.c ft_str_fct.c ft_hexdump.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o :
	gcc $(FLAGS) -c -I ft_hhexdump.h $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ) ft_hhexdump.h.gch

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
