# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:15:02 by vismaily          #+#    #+#              #
#    Updated: 2022/07/19 11:01:28 by vismaily         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= sed

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
				@$(RM) *.replace

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
