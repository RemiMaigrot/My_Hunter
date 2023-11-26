##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Description Makefile
##

NAME    =       my_hunter

SRC     =     	src/main.c \
				src/game.c \
				src/create_struct.c \
				src/destroy.c \
				src/create_sprite.c \
				src/boucle.c \
				src/collision.c \
				src/main_functions.c \
				src/analyse_events.c \
				src/fill.c \
				src/game2.c

OBJ	=	$(SRC:.c=.o)


all:	$(NAME) clean

$(NAME):	$(OBJ)
			make -C lib/my
			gcc -o $(NAME) $(OBJ) -I./include -L./lib/ -lmy -I ./include -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

run_tests:
	./unit_tests

re:	fclean all

.PHONY: all clean fclean re
