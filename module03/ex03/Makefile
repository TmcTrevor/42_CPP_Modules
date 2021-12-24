NAME = FragTrap

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

Headers = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all: $(NAME)

$(NAME): $(SRC) $(Headers)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all