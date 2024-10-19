NAME= interface
CPP= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
SRC= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean