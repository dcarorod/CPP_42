# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:47:53 by dcaro-ro          #+#    #+#              #
#    Updated: 2024/11/04 18:07:01 by dcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		 megaphone

SRCS		=		megaphone.cpp

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
