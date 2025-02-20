# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 14:01:51 by dcaro-ro          #+#    #+#              #
#    Updated: 2024/12/16 14:14:33 by dcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook

SRCS	=	PhoneBook.cpp \
			Contact.cpp \
			utils.cpp \
			main.cpp

CPP		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDE_DIR	=	include

OBJ_DIR	=	.obj
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

INCLUDES	=	-I $(INCLUDE_DIR)

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CPP) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
