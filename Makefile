NAME = push_swap

MY_SOURCES  = ./src/*

MY_OBJS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

LIBFT_DIR = ./lib/libft
PRINTF_DIR = ./lib/printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(MY_OBJS) $(LIBFT) $(PRINTF)
	gcc $(CFLAGS) $(MY_OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -c $< -o $@

clean:
	rm -f $(MY_OBJS)
	make clean -C $(LIBFT_DIR) || true
	make clean -C $(PRINTF_DIR) || true

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_DIR)/*.o
	rm -f $(PRINTF_DIR)/*.o

re: fclean all

.PHONY: all clean fclean re