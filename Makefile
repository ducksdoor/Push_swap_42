NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS =	ft_push_swap.c ft_push_swap_utils.c ft_push_swap_utils_2.c\
		ft_list_utils.c ft_list_utils_2.c \
		ft_foo.c ft_foo_utils.c \
		ft_stack.c ft_moves_swap.c ft_moves_down.c ft_moves_up.c\
		ft_moves_change.c ft_check.c\
		ft_showme.c
	
OBJS = $(SRCS:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all bonus 

.PHONY: re all bonus clean fclean
