SRCS_DIR	= srcs/
COMMON_SRCS = ${wildcard srcs/*.c}
SRCS		= main.c ${COMMON_SRCS}
OBJS		= ${SRCS:.c=.o}
TSTS		= main_tests.c ${COMMON_SRCS}
TSTS_OBJS	= ${TSTS:.c=.o}
INCLUDES	= -I includes
NAME 		= rush-02
GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -f

.c.o	:
		${GCC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

all		:	${NAME}

clean	:
		${RM} ${OBJS}

${NAME}	:	${OBJS}
		${GCC} ${CFLAGS} ${INCLUDES} ${OBJS} -o ${NAME}

fclean	:	clean
		${RM} ${NAME}

tst		:	clean ${TSTS_OBJS}
		${GCC} ${CFLAGS} ${INCLUDES} ${TSTS_OBJS}

.PHONY: all clean fclean
