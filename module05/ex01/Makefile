NAME = Forms

Headers = Bureaucrat.hpp Form.hpp

SRC = Bureaucrat.cpp main.cpp Form.cpp

Flags = -Wall -Wextra -Werror 

CC = clang++ -std=c++98

all : $(NAME)

$(NAME) : $(SRC) $(Headers)
		$(CC) $(Flags) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all