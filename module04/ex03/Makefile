NAME = AMateria

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		AMateria.cpp \
		Cure.cpp \
		Character.cpp \
		Ice.cpp \
		MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp MateriaSource.hpp Ice.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp MateriaSource.hpp Ice.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all