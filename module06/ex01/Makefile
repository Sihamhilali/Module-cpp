NAME = Serializer

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		Serializer.cpp \


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Serializer.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp Serializer.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all