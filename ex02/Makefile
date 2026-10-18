# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/18 19:52:10 by otlacerd          #+#    #+#              #
#    Updated: 2026/10/18 19:56:27 by otlacerd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = overload

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

HEADERS = Fixed.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re