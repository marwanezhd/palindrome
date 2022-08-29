SRC	=	src/main.c \
		src/anexes.c \
		src/palindrome.c \

NAME	=   palindrome

CC =     cc

RM =     rm -f

CFLAGS	= -g3

OBJ	=    $(SRC:.c=.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:    $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
