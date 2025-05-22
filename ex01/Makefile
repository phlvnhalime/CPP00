NAME = phonebook

CXX = g++

CXXFLAG = -Wall -Wextra -Werror -std=c++17

SRCS= main.cpp contact.cpp phoneBook.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re