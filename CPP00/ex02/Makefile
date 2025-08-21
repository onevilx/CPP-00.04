# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/22 16:28:33 by onevil_x          #+#    #+#              #
#    Updated: 2025/08/21 03:13:17 by onevil_x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
SOURCES = Account.cpp tests.cpp
INCLUDES = Account.hpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CPPFLAGS) $(OBJ) -o $@

%.opp: %.cpp $(INCLUDES)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)	

fclean: clean
	$(RM) $(NAME)

re: fclean all