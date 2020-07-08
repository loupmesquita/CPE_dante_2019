##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	solver

SRC	=	source/fs_cat_500_bytes.c \
		source/fs_cat_x_bytes.c \
		source/fs_open_file.c \
		source/maze.c \
		source/maze2.c \
		source/string_maze.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS = -g3

all:	$(NAME)

$(NAME):	$(OBJ) $(SRC)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all


