NAME = Forms

Headers = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SRC = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp

Flags = -Wall -Wextra -Werror 

CC = c++ -std=c++98

all : $(NAME)

$(NAME) : $(SRC) $(Headers)
		$(CC) $(Flags) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all