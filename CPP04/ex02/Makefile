NAME = AbstractClass
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp Cat.cpp Dog.cpp AAnimal.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
INCLUDES = Cat.hpp Dog.hpp AAnimal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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