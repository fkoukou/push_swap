NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = checker.c fonctin_list.c push_swap.c \
 push_swap.utils.c push.c rotate_reverse.c rotate.c \
 sort_stack_utils.c sort_stack.c sort.c split.c swap.c utils_args.c\


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.SECONDARY: $(OBJ)