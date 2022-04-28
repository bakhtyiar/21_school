SRCS 	= main.c ../body/get_next_line_bonus.c ../body/get_next_line_utils_bonus.c
OBJS	= $(SRCS:.c=.o) 
HEADS	= get_next_line_bonus.h

CC				= gcc
RM				= rm -rf
CFLAGS			= -I. -D BUFFER_SIZE=42

NAME			= a.out

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re