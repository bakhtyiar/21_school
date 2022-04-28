HEADER = ${/includes/*.h}

SRCS = ${wildcard /srcs/*.c}

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${OBJS} -L ${HEADER}

all :	${OBJS}
	gcc ${CFLAGS} -c ./srcs/*.c
	cd srcs
	ar rc ${NAME} *.o
	cd ..

clean :
	RM /srcs/${OBJS}.o
	RM /srcs/${OBJS}.swp
	RM /srcs/${OBJS}.out

fclean :
	RM /srcs/${OBJS}.o
	RM /srcs/${OBJS}.swp
	RM /srcs/${OBJS}.out
	RM /bin/*


re : fclean all

.PHONY : default all clean fclean re