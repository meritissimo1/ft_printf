# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 18:30:29 by marcrodr          #+#    #+#              #
#    Updated: 2021/08/10 19:26:13 by marcrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc 
CFLAGS = -Wall -Wextra -Werror 
LIB = ar -rcs
RM = rm -rf

SRCS = ft_printf.c 

OBJS = $(SRCS:.c=.o)
PROGRAM = main.out

all: $(NAME)

.c.o = @$(CC) $(CFLAGS) -c fPIC $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			@$(LIB) $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:
			@$(RM) $(NAME) $(PROGRAM) *.a

compile:	fclean $(NAME)
			$(CC) -static main.c -L . -lftprintf $(CFLAGS) -lbsd -o $(PROGRAM)

re: fclean all

.PHONY:		all clean fclean re compile .c.o $(NAME)

 
