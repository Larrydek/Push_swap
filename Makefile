NAME = push_swap

MY_SOURCES  = $(shell find ./src -name *.c)

MY_OBJS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g3

LIBFT_DIR = ./lib/libft
PRINTF_DIR = ./lib/printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

$(LIBFT):
	@make -sC $(LIBFT_DIR)

$(PRINTF):
	@make -sC $(PRINTF_DIR)

$(NAME): $(MY_OBJS) $(LIBFT) $(PRINTF)
	@gcc $(CFLAGS) $(MY_OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	@gcc $(CFLAGS) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -c $< -o $@

clean:
	@rm -f $(MY_OBJS)
	@make clean -sC $(LIBFT_DIR)
	@make clean -sC $(PRINTF_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)
	@rm -f $(PRINTF)

re: fclean all

.PHONY: all clean fclean re