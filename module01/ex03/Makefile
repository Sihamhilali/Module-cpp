NAME = brain

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp 
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ) HumanA.hpp HumanB.hpp Weapon.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all