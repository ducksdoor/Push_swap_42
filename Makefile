NAME = push_swap.a

CC = gcc
FLAGS = -Wall -Wextra -Werror -I $(INCLUDE) 
RM = rm -f
AR = ar rcs

SRCS =	ft_push_swap.c \
		ft_push_swap_utils.c \
		ft_foo.c \ ft_foo_utils.c

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)


$(NAME): $(OBJS) $(INCLUDE) $(LIBFT)
	@$(AR) $(NAME) $(OBJS) $(LIBFT)

clean:
	@$(RM) $(OBJS_BONUS) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all bonus 

.PHONY: re all bonus clean fclean
