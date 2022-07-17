# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 17:18:44 by vismaily          #+#    #+#              #
#    Updated: 2022/07/17 18:10:19 by vismaily         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= karenFilter

SRCS			= $(wildcard *.cpp)

OBJS			= $(SRCS:.cpp=.o)

CC				= c++

CFLAGS			= -Wall -Werror -Wextra -std=c++98

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
