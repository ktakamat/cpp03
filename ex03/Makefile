NAME = ex03
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFLAGS += -Wshadow
SRCS = main.cpp \
	ScavTrap.cpp \
	DiamondTrap.cpp \
	ClapTrap.cpp \
	FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re