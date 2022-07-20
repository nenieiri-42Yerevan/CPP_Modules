# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 12:22:05 by vismaily          #+#    #+#              #
#    Updated: 2022/07/20 13:09:11 by vismaily         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fixed

SRCS			= $(wildcard *.cpp)

OBJS			= $(SRCS:.cpp=.o)

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

RM				= rm -f

all:			$(NAME)

.cpp.o:
				@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJS)
				@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				clean fclean

.PHONY:			all clean fclean re
