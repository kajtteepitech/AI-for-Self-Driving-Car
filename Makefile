##
## PROJECT, 2021
## makefile
## File description:
## ai makefile
##

CC	=	gcc

SCR = $(wildcard lib/my/*.c)

OBJ = $(SCR:.c=.o)

LIB = lib/my/libmy.a

SRC = $(wildcard *.c)

FLAGS = -I./include -L./lib/my -lmy -lncurses

NAME = ai

NBR_OF_FILES := $(words $(SRC))

RM      =       rm -f

all:	$(LIB)
		@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;34m$(NBR_OF_FILES)\033[0m"
		@ $(CC) $(OBJ) -o $(NAME) $(SRC) $(FLAGS)
$(LIB): $(OBJ)
		@ $(AR) rsc $(LIB) $(OBJ)
		@ echo "\033[1;34mBinary : \033[1;32m$(NAME)\033[1;34m created sucesfully.\033[0m"

clean:
		@ echo "\033[3;31mRemoving: \033[0m"
		@ echo "\033[3;31m$(OBJS)\033[0m" | tr ' ' '\n'
		@ 	$(RM) $(OBJ)
		@	$(RM) *~
		@	$(RM) '#*#'

fclean:	clean
		@ echo "\033[3;31m./$(NAME)\033[0m"
		@ 	$(RM) -f $(NAME)
		@	$(RM) $(LIB)

re: 	fclean all

%.o:	%.c
		@ echo "\033[1;34m[ OK ]\033[0m Compiling" $<
		@ $(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all clean fclean re
