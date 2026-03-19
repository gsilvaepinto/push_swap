NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	=	main.c \
			utils/exit_prog.c \
			utils/lst_operations.c \
			utils/operations.c \
			utils/parse_values.c \
			utils/push.c \
			utils/radix.c \
			utils/reverse_rotate.c \
			utils/rotate.c \
			utils/swap.c \
			utils/utils.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
