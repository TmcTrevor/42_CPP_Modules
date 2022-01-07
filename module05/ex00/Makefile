Name = Bureaucrat

Headers = Bureaucrat.hpp

SRC = Bureaucrat.cpp main.cpp

Flags = -Wall -Wextra -Werror 

CC = clang++ -std=c++98
all : $(NAME)

$(Name) : $(src) $(Headers)
		$(CC) $(Flags) $(SRC) -o $(Name)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all