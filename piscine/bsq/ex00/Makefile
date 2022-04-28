HEADER = ${includes/ft.h}

SRCS = main.c ${wildcard src/*.c} ${wildcard src/tools/*.c}

OBJS = ${SRCS:.c=.o}

NAME = bsq

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all :	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :
	RM ${OBJS}

fclean : clean
	RM ${NAME}


re : fclean all

.PHONY : default all clean fclean re