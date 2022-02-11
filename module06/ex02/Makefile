NAME = Serialization

SRC = main.cpp Base.cpp

Flags = -Wall -Wextra -Werror 

CC = c++ -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(Flags) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all