NAME 	=	Exercise02

SRC		=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp
			

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98



OBJECTS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		@echo "\033[0;33mCompiling..."
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
		@echo "\033[0m"

.cpp.o:
		@echo "\033[0;32mGenerating obj..."
		$(CC) $(CFLAGS) -c -o $@ $<
		@echo "\033[0m"

clean:
		@echo "\033[0;31mCleaning..."
		@$(RM) -f $(OBJECTS)
		@echo "maked clean"
		@echo "\033[0m"

fclean: clean
		@echo "\033[0;31mRemoving executable..."
		@$(RM) -f $(NAME)
		@echo "maked fclean"
		@echo "\033[0m"

re:			fclean all

.PHONY: all clean fclean re
