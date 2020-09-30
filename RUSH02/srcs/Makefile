# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grannou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 15:32:37 by grannou           #+#    #+#              #
#    Updated: 2020/09/27 13:19:35 by grannou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = $(wildcard *.c) //wildcard equals dollarstar outside a command//
OBJ = $(SRC: .c = .o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(OBJ)
		$(CC) -o $(NAME) -c $(SRC) $(CFLAGS)

%.o: %.c
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
