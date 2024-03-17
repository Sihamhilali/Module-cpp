NAME = zombie

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp 
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ) Zombie.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
	
re: clean all
.PHONY: re all clean fclean