# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/26 15:38:20 by dcaro-ro          #+#    #+#              #
#    Updated: 2024/12/27 13:03:33 by dcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	horde

SRCS	=	Zombie.cpp \
			zombieHorde.cpp \
			main.cpp

CPP		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ_DIR	=	.obj
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

VALGRIND	=	valgrind
VGFLAGS		=	--leak-check=full --show-leak-kinds=all --track-origins=yes

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(OBJS) $(CFLAGS) -o $(NAME)

valgrind: $(NAME)
	$(VALGRIND) $(VGFLAGS) ./$(NAME)

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re valgrind
