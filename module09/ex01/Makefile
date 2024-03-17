NAME = RPN

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		RPN.cpp \


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) RPN.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp RPN.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all