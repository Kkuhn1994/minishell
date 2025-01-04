SRC = *.cpp
NAME = Bureaucrat
all: Bureaucrat
CC = c++ -Wall -Wextra -Werror -std=c++11

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
	
re: fclean all
