SRCS = main.c
NAME = a.out
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

re: $(NAME)
	RM $(NAME)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)