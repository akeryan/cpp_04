# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 14:39:51 by akeryan           #+#    #+#              #
#    Updated: 2024/05/22 08:37:33 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec 

CXXFLAGS =  -fsanitize=address -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
CXX = c++
RM = rm -rf

SRC_FILES = main.cpp	\
			Animal.cpp	\
			Dog.cpp		\
			Cat.cpp		

INCLUDE_FILES = Animal.hpp	\
				Dog.hpp		\
				Cat.hpp		

OBJ = $(patsubst %.cpp, %.o, $(SRC_FILES))

%.o: %.cpp $(INCLUDE_FILES) 
	$(CXX) $(CXXFLAGS) -o $@ -c $<  

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
