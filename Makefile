NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS =	ft_push_swap.c ft_push_swap_utils.c\
		ft_list_utils.c ft_list_utils_2.c\
		ft_argo_lite.c ft_argo_utils.c ft_argo_big.c\
		ft_stack_check.c ft_moves.c\
	
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
