NAME = push_swap

SRC = push_swap.c \


OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
MLXFLAGS = -lmlx -framework OpenGL -framework AppKit #-g3 -fsanitize=address


LIBFT_DIR = ./Libft_BONUS
LIBFT = $(LIBFT_DIR)/libft_BONUS.a

PRINTF_DIR = ./libft_printf
PRINTF = $(PRINTF_DIR)/libft_printf.a

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(PRINTF)
	gcc $(CFLAGS) $(OBJS) $(MLXFLAGS) \
	-L$(LIBFT_DIR) -lft_BONUS -L$(PRINTF_DIR) -lft_printf -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)

re: fclean all