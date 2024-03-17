
NAME = losers

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Losers.cpp 
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ) Losers.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp Losers.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ) *.replace
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all