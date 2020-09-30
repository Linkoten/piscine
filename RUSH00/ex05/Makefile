# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 12:01:52 by pbrochar          #+#    #+#              #
#    Updated: 2020/09/28 18:42:06 by pbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = check_arg.c ft_str_num.c operand.c main.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o :
	gcc $(FLAGS) -c -I ft_do_op.h $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ) ft_do_op.h.gch

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
