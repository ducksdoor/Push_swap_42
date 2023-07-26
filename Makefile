NAME = push_swap.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs


SRCS =	ft_push_swap.c \
		ft_push_swap_utils.c ft_list_utils.c ft_list_utils_2.c \
		ft_foo.c ft_foo_utils.c \

OBJS = $(SRCS:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	@$(AR) $(NAME) $(OBJS) 

clean:
	@$(RM) $(OBJS_BONUS) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all bonus 

.PHONY: re all bonus clean fclean
