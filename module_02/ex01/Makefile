# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 17:41:50 by rda-cunh          #+#    #+#              #
#    Updated: 2025/05/29 01:28:00 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re