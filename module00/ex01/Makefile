
NAME = phoneBook

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) PhoneBook.hpp Contact.hpp 
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

clean: clean
	rm -rf $(NAME)
	
re: fclean all