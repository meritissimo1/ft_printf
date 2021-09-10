# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 18:30:29 by marcrodr          #+#    #+#              #
#    Updated: 2021/09/10 13:25:39 by marcrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc 
CFLAGS = -Wall -Wextra -Werror 
LIB = ar -rcs
RM = rm -rf

SRCS = ft_printf.c ft_numbers.c ft_putstr_fd.c ft_strlen.c ft_memcpy.c \
	ft_strdup.c ft_ullitoa_base.c ft_itoa.c ft_putchar_fd.c \
	ft_calloc.c ft_bzero.c ft_memset.c
	

OBJS = $(SRCS:.c=.o)
PROGRAM = a.out

all: $(NAME)

.c.o = 		@$(CC) $(CFLAGS) -c fPIC $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			@$(LIB) $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:
			@$(RM) $(NAME) $(PROGRAM) *.a

compile:	fclean $(NAME)
			$(CC) -static ../main_printf.c -L . -lftprintf $(CFLAGS) -lbsd -o $(PROGRAM)

re: fclean all

.PHONY:		all clean fclean re compile .c.o $(NAME)