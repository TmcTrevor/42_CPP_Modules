NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

CP = clang++

SRC = PhoneBook.cpp Contact.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all