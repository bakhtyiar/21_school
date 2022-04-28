NAME = libftprintf.a

SRCS =		ft_printf.c	

OBJS 			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

CC =		gcc
RM =		rm -rf
CFLAGS = 	-Wall -Wextra -Werror -I.

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $< -c

all:	$(NAME)

test:
	gcc -Wall -Wextra -Werror main.c ft_printf.c -I. -o ft_printf
	./ft_printf

clean: 
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus