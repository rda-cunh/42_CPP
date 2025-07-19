# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 17:41:50 by rda-cunh          #+#    #+#              #
#    Updated: 2025/07/19 18:06:26 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/Bureaucrat.cpp $(SRC_DIR)/AForm.cpp \
		$(SRC_DIR)/PresidentialPardonForm.cpp $(SRC_DIR)/RobotomyRequestForm.cpp \
		$(SRC_DIR)/ShrubberyCreationForm.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR) -g
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re