# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 11:23:37 by asyani            #+#    #+#              #
#    Updated: 2024/07/18 12:09:10 by asyani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_C = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
FILES_O = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
CC_CFLAGS = cc -Wall -Wextra -Werror -c
NAME = libft.a
AR = ar rcs
RM = rm -f
MV = mv *.o srcs

all:
	$(CC_CFLAGS) $(FILES_C)
	$(MV)
	$(AR) $(NAME) $(FILES_O)

clean:
	$(RM) $(FILES_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
