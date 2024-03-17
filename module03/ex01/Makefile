NAME = ScavTrap

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		ScavTrap.cpp \
		ClapTrap.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp ScavTrap.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all