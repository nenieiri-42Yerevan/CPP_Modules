# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 11:46:43 by vismaily          #+#    #+#              #
#    Updated: 2022/08/15 11:54:20 by vismaily         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= easyfinds

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

re:				fclean all

.PHONY:			all clean fclean re
