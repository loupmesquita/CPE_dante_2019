##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	generator

SRC	=	source/concat_strings.c \
		source/my_strlen.c \
		source/mem_alloc.c \
		source/my_strh.c \
		source/perfect.c \
		source/main.c \


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