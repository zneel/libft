
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouvier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 18:49:32 by ebouvier          #+#    #+#              #
#    Updated: 2018/03/28 02:00:55 by ebouvier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libft
CC			= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS		= ft_strlen.c \
					ft_atoi.c \
					ft_putstr.c \
					ft_putchar.c \
					ft_itoa.c \
					ft_putnbr.c \
					ft_memset.c \
					ft_strdup.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strcpy.c \
					ft_strncpy.c \
					ft_strcat.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strstr.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strcmp.c
OBJS		= $(SRCS:.c=.o)


all : $(NAME)

$(NAME) :	$(OBJS)
					ar rcs $(NAME).a $(OBJS)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME).a

re : fclean all

.PHONY : clean fclean re
