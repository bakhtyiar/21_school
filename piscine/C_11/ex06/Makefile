SRCS = ${wildcard *.c}
INCLUDES = ${wildcard includes/*.h}
MAIN = main.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
NAME = a.out
LIB = libft.a

all: ${NAME}

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	gcc ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
	rm -f ${LIB}