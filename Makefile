##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=		src/main.c		\
			src/get_next_line.c	\
			src/piece.c		\

CRIT_SRC	=	bonus/is_horizontal.c	\
			bonus/get_tile.c	\
			bonus/get_size.c	\
			src/ship.c		\
			src/lib.c		\
			src/get_next_line.c

CRIT_NAME	=	criterion

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

CFLAGS	+=	-Wall -Wextra -I./inc -g

LDFLAGS = -lcriterion -lgcov --verbose -I./inc

all	:	$(NAME)

$(NAME):			$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean	:
			rm -f $(NAME)

fclean	:	clean
			rm -f $(OBJ)
			rm -f $(CRIT_NAME)

re	:	fclean all

test_run:			$(OBJ)
		cc -o $(CRIT_NAME) $(CRIT_SRC) $(LDFLAGS)
		./$(CRIT_NAME)

.PHONY: all clean fclean re test_run
