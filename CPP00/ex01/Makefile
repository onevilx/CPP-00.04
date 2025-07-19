# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/22 16:28:33 by onevil_x          #+#    #+#              #
#    Updated: 2025/07/19 00:23:25 by onevil_x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Register
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = Contact.cpp Phonebook.cpp main.cpp
INCLUDES = Phonebook.hpp Contact.hpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CPPFLAGS) $(OBJ) -o $@

%.opp: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)	

fclean: clean
	$(RM) $(NAME)

re: fclean all