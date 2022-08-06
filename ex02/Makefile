SRC = main.cpp
NAME = template
CPPFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ=$(SRC:%.cpp=%.o)
HEADER= MutantStack.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

.o:.cpp
	c++ -c $(CPPFLAGS) $? 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : $(NAME)
	./$(NAME)

save :
	git commit -am "$(MAKECMDGOALS)"
	git push https://github.com/swautelet/cpp08.git

.phony : fclean clean re all