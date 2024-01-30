LIB = ar rc

NAME = libftprintf.a

SRC = src

MY_SOURCES  = ./$(SRC)/*

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
		$(LIB) $(NAME) $(MY_OBJECTS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re