NAME = Animals

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

Headers = Animal.hpp Cat.hpp Dog.hpp
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

all: $(NAME)

$(NAME): $(SRC) $(Headers)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all