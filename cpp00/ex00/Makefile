NAME 	=	megaphone

SRC		=	megaphone.cpp
OBJECTS	=	$(SRC=:.cpp=.o)

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

all: 		$(NAME)

$(NAME): $(OBJECTS)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

.cpp.o:	
		$(CC) $(CFLAGS) -c $<

clean:
		@$(RM) -f $(OBJECTS)
		@echo "maked clean"

fclean: clean
		@$(RM) -f $(NAME)
		@echo "maked fclean"

re:			fclean all

.PHONY: all clean fclean re

# NAME = megaphone

# CC = clang++

# CFLAGS = -Wall -Wextra -Werror

# SRC = megaphone.cpp \

# OBJ = $(SRC:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJ)
# 	@echo "\033[0;33mCompiling..."
# 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
# 	@echo "\033[0m"

# .cpp.o:
# 	@echo "\033[0;32mGenerating obj..."
# 	$(CC) $(CFLAGS) -c $<
# 	@echo "\033[0m"

# clean:
# 	@echo "\033[0;31mCleaning..."
# 	rm -f $(OBJ)
# 	@echo "\033[0m"

# fclean: clean
# 	@echo "\033[0;31mRemoving executable..."
# 	rm -f $(NAME)
# 	@echo "\033[0m"

# re: fclean all

# .PHONY: all re clean fclean