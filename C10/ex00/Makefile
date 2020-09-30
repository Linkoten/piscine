# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 17:03:20 by pbrochar          #+#    #+#              #
#    Updated: 2020/09/28 19:19:07 by pbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = main.c ft_check_error.c ft_str_fct.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o :
	gcc $(FLAGS) -c -I ft_display_file.h $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
