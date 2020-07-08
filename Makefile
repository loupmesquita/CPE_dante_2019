##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	./solver/solver

NAME2	=	./generator/generator

SRC	=	solver/source/fs_cat_500_bytes.c \
		solver/source/fs_cat_x_bytes.c \
		solver/source/fs_open_file.c \
		solver/source/maze.c \
		solver/source/maze2.c \
		solver/source/string_maze.c \

SRC2	=	generator/source/concat_strings.c \
		generator/source/my_strlen.c \
		generator/source/mem_alloc.c \
		generator/source/my_strh.c \
		generator/source/perfect.c \
		generator/source/main.c \


OBJ	=	$(SRC:.c=.o)

OBJ2 =	$(SRC2:.c=.o)

CFLAGS = -g3

LDFLAGS = -L/./solver/ -lsolver
LDFLAGS2 = -L/./generator/ -lgenerator

all:	$(NAME) $(NAME2)

$(NAME):	$(OBJ) $(SRC)
		make -C ./solver/
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

$(NAME2):	$(OBJ2) $(SRC2)
		make -C ./generator/
		gcc -o $(NAME2) $(OBJ2) $(CFLAGS)

clean:
	rm -f $(OBJ) $(OBJ2)

fclean: clean
	rm -f $(NAME) $(NAME2)

re:	fclean all


