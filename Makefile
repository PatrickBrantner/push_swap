# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 17:24:26 by pbrantne          #+#    #+#              #
#    Updated: 2023/01/30 17:24:53 by pbrantne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c \
	check_input.c \
	convert_input.c \
	sorting.c \
	sorting_small.c \
	sorting_utils_1.c \
	sorting_utils_2.c \
	functions.c \
	algorithm.c

LIBFT = ./libft/libft.a
	
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra 
CC = cc 
RM = rm -f
NAME = push_swap

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft

re: clean all