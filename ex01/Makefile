NAME = phonebook

CXX = g++

CXXFLAG = -Wall -Wextra -Werror -std=c++17

SRCS= main.c

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
  	$(CXX) $(CXXFLAG) -c $< -o $@

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re