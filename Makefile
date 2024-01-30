NAME = push_swap

SRC = src

MY_SOURCES  = $(SRC)/*.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

LIBFT_DIR = ./lib/Libft
LIBFT = $(LIBFT_DIR)/libft

PRINTF_DIR = ./lib/libftprintf
PRINTF = $(PRINTF_DIR)/libftprintf

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(PRINTF)
	gcc $(CFLAGS) $(OBJS) $(MLXFLAGS) \
	-L$(LIBFT_DIR) -l$(LIBFT) -L$(PRINTF_DIR) -l$(PRINTF) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re