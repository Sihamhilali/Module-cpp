NAME = Bureaucrat

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = 	Bureaucrat.cpp \
		Form.cpp \
		main.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp Form.hpp
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY : fclean re clean all