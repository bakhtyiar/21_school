SRCS = main.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
NAME = main

all: ${NAME}

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	gcc ${CFLAGS} $^ -o ${NAME}

clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}