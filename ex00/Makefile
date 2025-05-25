
NAME = megaphone

CXX = c++

CXXFLAG = -Wall -Wextra -Werror -std=c++98

SRCS= megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAG) $(SRCS) -o $(NAME)

# %.o:%.cpp
#  	$(CXX) $(CXXFLAG) -c $< -o $@

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re