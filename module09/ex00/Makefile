NAME = btc

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		BitcoinExchange.cpp \


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) BitcoinExchange.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp BitcoinExchange.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all