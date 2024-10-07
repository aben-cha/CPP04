NAME= interface
CPP= c++
CFLAGS= -Wall -Wextra -Werror
SRC= main.cpp AMateria.cpp Cure.cpp Ice.cpp #Character.cpp 
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean