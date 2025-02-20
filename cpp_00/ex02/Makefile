# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/26 13:06:01 by dcaro-ro          #+#    #+#              #
#    Updated: 2024/12/26 13:11:10 by dcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		 Account

SRCS		=		Account.cpp \
					tests.cpp

CC			=		c++

CFLAGS		=		-Wall -Wextra -Werror -std=c++98

OBJS		=		${SRCS:.cpp=.o}

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
