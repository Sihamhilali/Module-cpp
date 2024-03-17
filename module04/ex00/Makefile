NAME = Animal

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all