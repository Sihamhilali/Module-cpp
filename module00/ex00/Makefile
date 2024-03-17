# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 15:28:09 by selhilal          #+#    #+#              #
#    Updated: 2023/10/11 20:33:01 by selhilal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

GCC = c++
 
FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) $(FLAGS) $(SRC) -o $(NAME)

 
clean: clean
	rm -rf $(NAME)
	
re: fclean all