##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=		src/main.c		\
			src/get_next_line.c	\
			src/piece.c		\
			src/utils.c		\
			src/display_game.c	\

CRIT_SRC	=	bonus/is_valid_file.c	\
			bonus/contains_str.c	\
			src/utils.c		\
			src/piece.c		\
			src/get_next_line.c	\

CRIT_NAME	=	criterion

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

CFLAGS	+=	-Wall -Wextra -I./inc -g

LDFLAGS = -lcriterion -lgcov --verbose -I./inc

all	:	$(NAME)

$(NAME):			$(OBJ)
		gcc -o $(NAME) $(OBJ) -lncurse

clean	:
			rm -f $(NAME)

fclean	:	clean
			rm -f $(OBJ)
			rm -f $(CRIT_NAME)

re	:	fclean all

test_run:
		cc -std=c99 -o $(CRIT_NAME) $(CRIT_SRC) $(LDFLAGS)
		./$(CRIT_NAME)

.PHONY: all clean fclean re test_run
