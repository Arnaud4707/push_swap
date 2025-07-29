# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amugisha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 21:28:47 by amugisha          #+#    #+#              #
#    Updated: 2025/01/30 03:35:00 by amugisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: $(NAME) $(LIB) main all clean fclean re

GREEN='\033[0;32m'

RED='\033[0;31m'

BRUN='\033[0;33m'

NAME = push_swap

CC = cc

HEADER = header.h

LIB = libpush_swap.a

CFLAGS = -Wall -Wextra -Werror -I $(HEADER) -g3

SRC = ft_atoi.c ft_split.c ft_strncmp.c\
      ft_itoa.c ft_strjoin.c verif.c utils.c\
      tab.c swap.c push.c action.c push_utils.c\
      reverse_rotate.c rotate.c is_trie.c print_swap.c\
      print_push.c print_rotate.c print_reverse_rotate.c\
      small_number.c pull.c big_number.c my_big_number.c\
      my_big_number_part2.c

OBJ = $(SRC:.c=.o)

MAIN = main.c

OBJM = $(MAIN:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<
	
$(NAME): $(OBJM) $(LIB)
	@echo $(BRUN) "Compiling push_swap..."
	@$(CC) $(CFLAGS) $(OBJM) -L. -l push_swap -o $(NAME)
	@echo $(GREEN) "OK: push_swap"

$(LIB): $(OBJ)
	@echo $(BRUN) "Make lib_push_swap..."
	@ar rcs -o $(LIB) $(OBJ)
	@echo $(GREEN) "OK: lib_push_swap"

main: $(MAIN)
	@$(CC) $(CFLAGS) -o main.o -c $(MAIN)

all: $(NAME)

clean: 
	@echo $(BRUN) "Removing .o object..."
	@rm -rf $(OBJ) $(OBJM)
	@echo $(GREEN) "OK: Removing .o object"

fclean: clean
	@echo $(BRUN) "Removing push_swap..."
	@rm -rf $(NAME) $(LIB)
	@echo $(GREEN) "OK: Removing push_swap"

re: fclean all
