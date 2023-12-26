# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 15:40:18 by dmatavel          #+#    #+#              #
#    Updated: 2023/09/16 04:09:48 by dmatavel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC	= src/main.cpp src/Contact.cpp src/PhoneBook.cpp

OBJ	= $(SRC:.cpp=.o)
CCP	= c++
FLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC)
	$(CCP) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)
	
clean:
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
