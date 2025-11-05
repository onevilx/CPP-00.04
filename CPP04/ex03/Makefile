NAME = Interfaces
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
INCLUDES = AMateria.hpp Cure.hpp Ice.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp 

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